/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44189
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) var_3);
                    arr_9 [i_0] [i_0] [i_2] [(signed char)12] = ((/* implicit */short) var_1);
                    var_10 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-27641)))), (((/* implicit */int) (unsigned short)23529)))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */short) var_4)), ((short)27640))), (((/* implicit */short) (((_Bool)1) && (var_1))))))) ? (((((/* implicit */int) arr_7 [i_0])) % (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) (short)-27641)))))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_0)))) ^ (min((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned short)36680)) << (((((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [i_0] [i_0])) - (60750)))))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((~(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0U)))) : ((-(((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_3])))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
                    var_14 -= ((/* implicit */unsigned short) (short)7);
                    arr_14 [i_0] [(unsigned short)15] [16U] [(unsigned short)15] = ((/* implicit */short) var_9);
                }
                /* LoopSeq 2 */
                for (unsigned short i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    arr_19 [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_1]);
                    var_15 = ((/* implicit */unsigned short) max(((short)-27641), (((/* implicit */short) (unsigned char)0))));
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23190)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)27640))))), (min((var_3), (((/* implicit */long long int) arr_5 [i_0] [i_1]))))));
                }
                for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_17 = min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) (short)27649))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_16 [i_5])) / (var_9)))))), (var_3));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_18 [i_5 - 3] [i_5 - 2] [i_5 - 3] [3LL])), (arr_13 [i_5 - 2] [i_5 - 2] [i_5 - 1])))) || ((_Bool)1)));
                    arr_22 [i_0] [i_1] [i_5 - 1] [i_5] |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)8908))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_8);
                                var_20 ^= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_7 - 1]))) ^ (var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_1] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_7 - 1])) - (((/* implicit */int) (unsigned char)124)))))));
                            }
                        } 
                    } 
                }
                var_21 -= ((/* implicit */unsigned char) (short)-2383);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_3);
}
