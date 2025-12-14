/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36890
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) (((((+(((/* implicit */int) (short)-5707)))) + (2147483647))) >> (((min((var_2), (((/* implicit */long long int) 2147483647)))) + (5602067073392334419LL))))))));
                var_14 = ((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 2] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_12 [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58)))))));
            arr_13 [i_2] = ((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_3]);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_15 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (_Bool)0))) % (((((/* implicit */int) arr_15 [i_2])) - (((/* implicit */int) arr_10 [i_2] [i_4 - 1] [i_2]))))));
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2 + 3] [i_4 - 1])) ? (15728640U) : (arr_11 [i_2 + 1] [i_2 + 2] [i_4 - 1])));
        }
        var_17 = ((/* implicit */unsigned char) arr_14 [i_2 - 1] [i_2]);
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5692))) != (arr_11 [i_2 + 1] [i_2 + 2] [i_2 + 3])));
    }
    var_19 = ((/* implicit */_Bool) ((unsigned short) var_10));
}
