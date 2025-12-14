/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234921
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (signed char)-36))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) % (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : ((-(((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1]))))));
    }
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((int) max((((/* implicit */unsigned long long int) var_7)), (var_10))))));
    /* LoopNest 2 */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            {
                arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_2])) & (((((/* implicit */_Bool) ((var_2) % (var_6)))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2])))))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)60)))))));
                var_14 += ((/* implicit */long long int) min(((short)7264), (((/* implicit */short) arr_6 [i_1]))));
                arr_8 [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) min(((short)-7262), ((short)14645))))))))));
                var_15 |= ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_4 [i_1] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-(var_6))))));
                    var_17 = ((/* implicit */short) ((unsigned long long int) (unsigned char)63));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */short) (unsigned char)241);
    }
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_3))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) ((var_10) - (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) var_3)))))))));
}
