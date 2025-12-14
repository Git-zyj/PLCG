/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50531
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
    var_10 = max((((/* implicit */long long int) var_6)), (var_5));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-4662931864739493699LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) > ((+(arr_0 [i_0]))))))) < ((+(max((((/* implicit */long long int) arr_0 [i_0])), (-1498521830292985111LL)))))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (+(max((var_8), (((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])))))))));
        var_12 = ((/* implicit */unsigned char) (-(((((((var_2) ^ (((/* implicit */long long int) arr_0 [i_0])))) + (9223372036854775807LL))) >> ((((+(16977622525420966844ULL))) - (16977622525420966787ULL)))))));
    }
    var_13 = ((/* implicit */unsigned short) (+(var_9)));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            {
                var_14 += ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_3] [i_4] = var_1;
                            arr_14 [i_4] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) & (((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */long long int) (+(((int) ((long long int) 1241404742293317559LL)))));
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)65535)), (((((((/* implicit */int) var_6)) > (((/* implicit */int) arr_7 [i_3] [i_5 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1]))) : (((long long int) (unsigned char)252))))));
                                var_16 = ((long long int) min((((/* implicit */long long int) ((unsigned char) var_9))), (var_8)));
                                arr_18 [i_5] [i_5] [i_4] |= ((/* implicit */_Bool) ((max((min((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [10] [i_1])), (9223372036854775807LL))), (((/* implicit */long long int) ((1627940829) / (((/* implicit */int) arr_10 [i_3]))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129)))));
                                var_17 = ((/* implicit */short) (((-(((/* implicit */int) max(((unsigned short)41945), (((/* implicit */unsigned short) arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5]))))))) <= (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)140)) >> (((-8009769961765666906LL) + (8009769961765666931LL)))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_6] [6LL])) >> (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2025845745)) ? (-2147483629) : (((/* implicit */int) arr_9 [i_1]))))) < (min((var_1), (((/* implicit */long long int) 50331648)))))))));
                    arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((arr_21 [i_6] [i_1] [i_1] [i_6 + 1]) & (((/* implicit */long long int) arr_6 [i_1]))))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) arr_10 [i_1])))));
                }
                arr_25 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_2])))) : (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
            }
        } 
    } 
}
