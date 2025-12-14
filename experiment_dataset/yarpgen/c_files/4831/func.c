/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4831
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 3] = ((/* implicit */_Bool) (short)12398);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_19 += ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2690373825U)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2 + 1])) >> (((/* implicit */int) max((var_16), (((/* implicit */short) (_Bool)1))))))))));
                    arr_8 [i_2] [i_2] [i_2 + 1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (15084033734673913693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15075)))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_0);
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) var_11);
                    var_21 -= ((/* implicit */unsigned long long int) var_17);
                }
                for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) 663872589391818809LL))), (((var_8) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))))) > (((((/* implicit */_Bool) 17592186042368ULL)) ? (((/* implicit */unsigned long long int) 461093868U)) : (82277668309220895ULL)))));
                            arr_20 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((unsigned long long int) (signed char)99)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_14)), ((short)-22309)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_15 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_2))))) > (((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14272))) / (arr_7 [i_4] [i_4]))), (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_5 - 3] [i_6]))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_4] = ((/* implicit */signed char) max(((unsigned short)1792), (((/* implicit */unsigned short) arr_3 [i_0] [i_1]))));
                            var_22 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1] [i_1] [i_5 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)65535))))) || (((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned short)26151)))))), (((((/* implicit */int) ((_Bool) (_Bool)0))) < (((/* implicit */int) var_12))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) min(((unsigned char)66), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 992132329U)) && (((/* implicit */_Bool) 1946373245U)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_5]))) == (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) (_Bool)0)), (268435456U)))))));
                            arr_28 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
                            var_23 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)31)) ? (arr_7 [i_8] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_4] [i_1] [i_4 - 2] [i_5 - 2] [i_9] = ((/* implicit */signed char) (unsigned char)187);
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_13 [i_0] [i_1] [i_0] [i_5 + 4]), (((/* implicit */short) arr_16 [i_0] [i_0]))))) ? (max((arr_17 [i_0] [i_1] [i_4] [i_4] [i_4 - 3] [i_4 - 3] [i_9]), (((/* implicit */unsigned long long int) (signed char)89)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_9] [i_5])), ((short)-25145))))))), (((/* implicit */unsigned long long int) ((arr_4 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0])))))));
                            arr_33 [i_0] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1248286926875461311LL)) % (562949953413120ULL)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_37 [i_4] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned short) arr_35 [i_0] [i_1 - 2] [i_4] [i_4] [i_5 - 3] [i_0])), (arr_6 [i_0] [i_1] [i_4 + 1]))));
                            arr_38 [i_0] [i_0] [i_4 - 3] [i_1] [i_10] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-113)), (4294967295U)))) ? (((((/* implicit */int) (short)27499)) & (((var_11) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) arr_36 [i_0])))))) : (((/* implicit */int) (short)16547))));
                            arr_39 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) < (((((/* implicit */int) arr_14 [i_0] [i_4])) + (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_4 - 1]))))))), ((short)-9559)));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_25 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_5)) + (31412))))));
                        var_26 *= ((/* implicit */_Bool) ((3935766785335149736ULL) << (((4294967295U) & (((unsigned int) (signed char)0))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_27 ^= var_6;
                        arr_45 [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-20293))))) ^ (((((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4] [i_4 - 3] [i_1 + 1] [i_4 + 1] [i_1 - 3] [i_1 + 1])) ? (arr_17 [i_4 - 3] [i_4 - 2] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_1 - 2] [i_1 - 2]) : (arr_17 [i_4 + 3] [i_4] [i_4 + 2] [i_4 + 1] [i_1] [i_1 - 3] [i_1 - 3])))));
                        arr_46 [i_4] [i_4] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned short) var_2);
                        arr_49 [i_0] [i_0] [i_0] [i_4 + 1] [i_13] [i_13 + 1] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8307052201898739912LL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)15628)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)15504))))));
                    }
                    arr_50 [i_0] [i_4] [i_1 + 1] [i_4] = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((unsigned char) (_Bool)0))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= ((+(0U))))))));
                    var_29 = ((var_3) == (((/* implicit */long long int) ((/* implicit */int) min((((short) var_2)), (((/* implicit */short) (unsigned char)0)))))));
                    arr_51 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) 0)) : (1734107872053922556ULL)))) ? (((/* implicit */int) max((arr_16 [i_0] [i_1 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)9442)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_43 [i_0] [i_0] [i_1] [i_4 - 2]))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) var_14);
}
