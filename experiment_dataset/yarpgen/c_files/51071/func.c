/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51071
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) min((-1734854705), (((/* implicit */int) (short)-31324))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))))) : ((~(((/* implicit */int) (unsigned short)1))))));
            }
        } 
    } 
    var_11 = max((max((((/* implicit */long long int) (~(((/* implicit */int) (short)-5))))), (var_8))), (min(((-(var_8))), (((/* implicit */long long int) var_1)))));
    var_12 &= min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)14))))))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_13 [i_2] |= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) | ((-2147483647 - 1))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_13 *= ((/* implicit */unsigned int) ((arr_1 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            var_14 |= ((/* implicit */short) 8305662203154713122LL);
        }
    }
}
