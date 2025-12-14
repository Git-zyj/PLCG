/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207312
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
    var_16 ^= ((/* implicit */unsigned int) var_12);
    var_17 = ((((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)6768)))) * (((/* implicit */int) var_5))))) / ((+(-759010979145323881LL))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)109)), (((short) (unsigned short)942))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) (unsigned short)6768))))))));
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1] [(unsigned short)8])))), (((unsigned char) arr_0 [i_0 + 1] [i_0]))));
        var_20 = min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)58767)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned char)212)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
            var_21 += ((/* implicit */short) max(((!(((/* implicit */_Bool) var_8)))), (((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_5 [i_1]))))));
            var_22 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)))) && (((/* implicit */_Bool) min((arr_8 [i_1] [i_1] [i_1]), (var_11)))))) || (((/* implicit */_Bool) 3441607010U))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_13 [14U] [i_2] [i_1] [i_1] = ((((/* implicit */int) ((short) 3692696450U))) & (arr_7 [i_1] [(_Bool)1]));
                arr_14 [i_1] [i_3] = ((/* implicit */int) (short)-2848);
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) max((1591919375U), (((/* implicit */unsigned int) arr_4 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)247), (((/* implicit */unsigned char) arr_11 [i_3] [i_2] [7U] [i_1])))))))) : (max((((((/* implicit */int) (unsigned char)107)) * (((/* implicit */int) var_1)))), (((/* implicit */int) min(((short)-28131), (((/* implicit */short) var_11))))))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8983675227942955460LL)) ? (734519417U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) arr_5 [i_4]))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(min((((/* implicit */int) ((-310120364) < (((/* implicit */int) (signed char)46))))), (((arr_7 [i_2] [i_4]) - (((/* implicit */int) (unsigned short)48552)))))))))));
                var_25 = ((/* implicit */unsigned short) arr_15 [i_1] [i_4] [i_1] [14U]);
                arr_18 [i_4] = ((/* implicit */_Bool) var_8);
                var_26 = ((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1]);
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) (+(((((var_3) / (((/* implicit */int) var_5)))) * (((var_3) * (((/* implicit */int) arr_16 [(short)10] [i_5]))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (unsigned short)37398);
                        arr_26 [i_1] [i_2] [2U] [2U] [i_6 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 - 2])) ? (((/* implicit */int) arr_3 [4])) : (((/* implicit */int) arr_19 [i_2] [14U]))))) ? (var_10) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_23 [i_2] [i_5] [(unsigned char)7])), ((unsigned short)13907))))))));
                        arr_27 [i_1] |= ((/* implicit */unsigned int) 487086158);
                    }
                    for (short i_8 = 1; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59255)) ? (arr_15 [i_5] [i_6 + 2] [i_6 - 1] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))) ? (((long long int) arr_15 [i_2] [i_6 + 2] [i_6 + 1] [i_8 + 1])) : (((((/* implicit */_Bool) 2703047907U)) ? (arr_15 [i_2] [i_6 + 2] [i_6 + 1] [i_8 + 1]) : (arr_15 [i_1] [i_6 - 1] [i_6 + 2] [i_8 + 3])))));
                        var_30 = ((long long int) ((unsigned long long int) ((-1535260894972861278LL) | (((/* implicit */long long int) arr_9 [(_Bool)1] [(_Bool)1] [i_5])))));
                        arr_30 [(unsigned short)16] [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */short) arr_23 [i_2] [i_8 - 1] [i_6 - 2]);
                        var_31 = ((/* implicit */unsigned char) 3854603823U);
                    }
                    for (short i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_32 += ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [2U] [i_1])) ^ (((/* implicit */int) (signed char)35)))) >> (((((/* implicit */int) var_12)) << (((var_14) - (184658590)))))))));
                        var_33 = ((/* implicit */short) ((unsigned int) ((((_Bool) arr_33 [i_1] [i_1] [(signed char)14] [i_5] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_6 - 2] [14U] [(_Bool)1])) >= (((/* implicit */int) (_Bool)1)))))) : (arr_21 [i_9 - 1] [i_6] [i_6] [i_6 + 2]))));
                    }
                    for (signed char i_10 = 3; i_10 < 17; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62266))) <= (min((((/* implicit */long long int) ((unsigned char) var_4))), (min((((/* implicit */long long int) arr_28 [i_1] [(unsigned char)14] [i_1] [i_1] [i_1] [i_1] [i_1])), (3284382700866651480LL)))))));
                        var_35 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)14)), (arr_4 [(unsigned short)3])))), (((((/* implicit */_Bool) -8983675227942955460LL)) ? (arr_21 [i_10] [i_6] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45925)))))))), (min((((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
                        arr_37 [i_1] [17U] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    arr_40 [i_1] [i_2] [(_Bool)1] [0LL] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)25537), (((/* implicit */unsigned short) (_Bool)0))))) % (((/* implicit */int) (unsigned char)9))));
                    arr_41 [i_5] [i_2] [i_2] [i_1] [i_5] = ((unsigned short) max(((signed char)-14), (((/* implicit */signed char) (_Bool)1))));
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((max((1913774626U), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)-36))))))) * (1913774626U))))));
                    var_37 *= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((((/* implicit */int) arr_12 [i_1] [10] [i_5] [(short)8])) ^ (((/* implicit */int) (_Bool)1))))));
                    var_38 &= ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)39999), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)39998))) ? (((/* implicit */int) ((unsigned char) var_2))) : ((+(((/* implicit */int) (short)21379))))))));
                }
                for (int i_12 = 3; i_12 < 17; i_12 += 4) 
                {
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-5733)) <= (((/* implicit */int) (signed char)-66))));
                    var_40 = arr_19 [i_1] [i_1];
                }
                arr_44 [(_Bool)1] = ((/* implicit */_Bool) min((((unsigned long long int) arr_43 [i_1] [i_1] [14U] [(short)16] [i_2])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) -6950602131446874775LL)) && (((/* implicit */_Bool) arr_8 [(unsigned short)14] [4U] [i_5]))))), (((arr_11 [i_1] [(signed char)4] [i_5] [i_1]) ? (1373680172302556418LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3270))))))))));
            }
        }
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [6LL] [6LL] [i_1]) >> (((((/* implicit */int) var_9)) - (14))))))))) < (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2703047915U)))))));
        var_42 = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_45 [i_1] [11LL] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_31 [i_1] [12LL] [i_1] [5] [i_1])) | (var_10)))));
    }
}
