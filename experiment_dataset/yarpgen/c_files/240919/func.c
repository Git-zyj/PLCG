/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240919
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) -1922952635))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_19 = ((/* implicit */short) min((min((((/* implicit */long long int) ((_Bool) 4192256))), (arr_1 [i_0]))), (((/* implicit */long long int) ((-2147483643) < (((/* implicit */int) (unsigned short)5)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) ((max((-731257986), (((/* implicit */int) (unsigned short)5)))) != ((-(2147483643)))));
                        var_21 = ((/* implicit */_Bool) ((max((930668914U), (var_7))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (+(var_12)))) <= (var_0)))))));
                    }
                    arr_13 [i_3] [i_3] = (-(var_16));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((long long int) (+(max((((/* implicit */int) (unsigned short)65531)), (arr_5 [13U] [7U]))))));
                        arr_17 [i_3] [i_2] [i_2] = ((/* implicit */long long int) min((((arr_3 [i_1] [(short)16]) | (((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_10 [i_3] [i_3]) : (var_2)))));
                        var_23 = var_12;
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((((long long int) ((-2147483643) ^ (((/* implicit */int) (unsigned short)5))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2] [(short)12] [i_5 + 2] [i_3]))) : (var_1))))))));
                            var_25 = ((/* implicit */unsigned short) var_15);
                        }
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            var_26 = ((arr_6 [i_5 - 1] [i_3] [14LL]) ^ (((unsigned int) (unsigned short)4)));
                            var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (((long long int) arr_7 [i_2 - 2]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_6 [i_2] [i_2] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))) % (1967750920U))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483643)) ? ((+(((/* implicit */int) arr_4 [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483643)))))));
                            var_30 = ((/* implicit */unsigned short) ((int) (unsigned short)65535));
                        }
                        var_31 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_16 [i_1] [i_1] [i_2] [i_3] [10] [i_5]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (559923564U)))))));
                    }
                    var_32 = (+(((/* implicit */int) (unsigned short)65519)));
                    var_33 = ((/* implicit */short) max((min((((/* implicit */long long int) ((_Bool) -2147483643))), (max((((/* implicit */long long int) 4294967294U)), (1423471930444177287LL))))), (((/* implicit */long long int) arr_8 [i_1]))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_14)), ((unsigned short)4)))))));
}
