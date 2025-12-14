/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198910
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) -4311175825312263122LL))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)103))))))) >= (((/* implicit */int) var_17))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))) || ((!(((/* implicit */_Bool) (signed char)14))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 504ULL)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) ? (-1837656556) : (((/* implicit */int) ((((/* implicit */unsigned int) -1837656558)) == (arr_4 [(_Bool)1] [(_Bool)1] [i_2]))))));
                            arr_15 [i_0] [i_1] [i_2] [9U] [i_2] [i_4] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (short)-5785)) : (((/* implicit */int) arr_1 [i_0])));
                            var_22 = ((/* implicit */_Bool) max((-1837656572), (-1837656590)));
                            arr_16 [8U] = ((/* implicit */long long int) 1837656555);
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) + ((+(max((846291054330113329LL), (((/* implicit */long long int) (unsigned char)76))))))));
                            arr_20 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_7 [(short)1] [i_3] [9U]);
                            arr_21 [i_0] [(signed char)1] [i_2] [i_3] [i_5] = min((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-68)), (((arr_8 [i_0] [i_1] [i_1] [i_0]) % (((/* implicit */int) arr_2 [(unsigned char)5] [i_0]))))))), (min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) var_3)) ? (var_9) : (var_15))))));
                        }
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1] [i_6]))));
                            arr_25 [i_0] [8U] [i_2] [(signed char)1] [i_6] = ((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_24 = -1837656531;
                        }
                        arr_26 [i_0] [i_1] [i_2] [(short)6] = min((1133187840U), (((/* implicit */unsigned int) max(((unsigned short)4846), (((/* implicit */unsigned short) (short)28853))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [4LL]))) / (min((10346294407253068110ULL), (var_3)))));
                        var_26 = ((/* implicit */signed char) max((((-1837656574) + (((((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) (signed char)44)))))), (((/* implicit */int) (short)-28506))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) arr_2 [i_1] [i_2]);
                        arr_29 [1U] [i_0] [i_2] [i_7] = ((/* implicit */signed char) ((arr_24 [i_0]) << (((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_2] [i_1] [i_7]))));
                        var_28 *= ((/* implicit */short) 1837656555);
                    }
                    arr_30 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((max((arr_4 [i_0] [i_1] [i_2]), (arr_0 [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-30)), (arr_18 [i_2] [6U] [i_1] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) var_6);
    var_30 = var_18;
}
