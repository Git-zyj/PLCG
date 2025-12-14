/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21313
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
    var_12 = ((/* implicit */unsigned char) -139433628);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_12 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2]))))) + (((((/* implicit */_Bool) -139433628)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3])))))), ((-(((/* implicit */int) arr_1 [i_0 + 1]))))));
                        arr_13 [i_3] [i_3] [i_2] [i_1] [(unsigned short)3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((-139433628) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1])))))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_2])) ? (arr_5 [i_3] [i_3] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_2])) - (((/* implicit */int) arr_1 [(unsigned short)9])))))))));
                        var_13 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_7 [i_2] [i_0 + 2] [i_2])) || (((/* implicit */_Bool) ((15938244143174477736ULL) << (((var_11) + (8167730407628280445LL))))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((139433628), (((/* implicit */int) var_4)))) + (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((arr_8 [(unsigned short)4] [(unsigned short)4] [i_2]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_3)) : (arr_15 [i_0] [i_1] [i_2] [1ULL] [i_4])))))) : (((arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_2]) + (arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_2])))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)240)) << (((((/* implicit */int) (!(((/* implicit */_Bool) -4467697403598250812LL))))) >> (((((4135224271278100608ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60131))))) - (11507286692421427564ULL)))))));
                            arr_19 [i_0] [i_1] [21ULL] [i_2] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_18 [3] [i_2])))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_16 = arr_7 [i_2] [i_2] [i_2];
                            var_17 = ((/* implicit */unsigned short) var_1);
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((((/* implicit */_Bool) arr_25 [14ULL] [i_1] [i_1])) ? (4503565267632128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46562))))))));
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_0))), (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [(_Bool)1]))))))));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_4] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18977))) ^ (900420892U)))) ? (((arr_8 [i_0 + 1] [i_0] [i_0 + 1]) % (((/* implicit */unsigned long long int) arr_16 [i_0 + 3] [i_0] [(_Bool)1] [i_0 + 2] [i_0] [i_0 + 1])))) : (((((unsigned long long int) arr_21 [i_0] [i_1] [(unsigned char)21] [i_2] [i_4] [i_7])) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0] [16U] [i_2] [i_4] [i_7]))))))));
                            var_19 = ((max((((/* implicit */unsigned long long int) ((arr_16 [i_4] [i_1] [i_2] [i_4] [i_7] [i_1]) - (((/* implicit */int) arr_22 [i_7] [i_4] [i_0] [i_1] [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)18978)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5382))) : (arr_8 [i_0] [i_2] [i_7]))))) < (((/* implicit */unsigned long long int) (-(arr_16 [i_0] [i_0] [i_7] [0ULL] [i_2] [i_0])))));
                            var_20 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [i_4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (4467697403598250811LL))), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 + 1])))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) - (918959176U))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_21 *= (!(((/* implicit */_Bool) arr_24 [i_8] [12ULL] [10U] [10U] [10U])));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((min((((arr_23 [i_8] [i_8] [i_8] [i_4]) / (((/* implicit */unsigned long long int) arr_6 [i_4] [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) var_7)))))));
                            arr_32 [i_1] [i_2] [i_1] [i_1] [i_1] = ((((unsigned long long int) 8444249301319680ULL)) + (((/* implicit */unsigned long long int) arr_16 [i_8] [(unsigned short)4] [(unsigned short)12] [i_2] [i_1] [i_0])));
                            var_23 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((arr_28 [i_0] [i_1] [i_2] [i_4] [i_8]) - (15810353504618491654ULL)))))) & (-4467697403598250790LL)))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((arr_28 [i_0] [i_1] [i_2] [i_4] [i_8]) - (15810353504618491654ULL))) - (10647631791078158818ULL)))))) & (-4467697403598250790LL))));
                        }
                    }
                    var_24 = ((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1]), (2147483647)));
                    var_25 = min((arr_5 [i_0] [i_0 + 3] [i_0] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(unsigned char)18] [(_Bool)1] [3U] [i_0] [(unsigned char)18])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) min(((unsigned short)46078), ((unsigned short)18997))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(var_8))), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))));
    var_27 = var_1;
    var_28 = var_0;
}
