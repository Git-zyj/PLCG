/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221679
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)44529))));
        arr_4 [i_0] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)96))))) ^ (((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1 - 2] [i_1 + 2] = ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [(unsigned short)15] [i_1 - 2]))))) ? (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (unsigned short)3767)) : (((/* implicit */int) (signed char)-119)))) : (((((/* implicit */int) (unsigned short)31006)) * (((/* implicit */int) (unsigned short)4379))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4379)) == (((((/* implicit */_Bool) (unsigned short)61156)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_3 - 1])) : (((/* implicit */int) arr_14 [i_1 - 1]))))));
                            arr_21 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) min((max((var_10), (((/* implicit */unsigned short) var_9)))), (var_2)))), ((+(((/* implicit */int) arr_14 [i_1 + 1]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31013)) ? (((/* implicit */int) (unsigned short)34551)) : (((/* implicit */int) (unsigned short)24374))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_5)))))), (((/* implicit */int) min(((unsigned short)65389), (min((((/* implicit */unsigned short) (signed char)-40)), ((unsigned short)34524)))))))))));
                            arr_25 [i_6] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) != ((((~(((/* implicit */int) var_10)))) % (((/* implicit */int) arr_16 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1]))))));
                            arr_26 [i_1 + 2] [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) * ((+(((/* implicit */int) (signed char)63))))));
                            arr_27 [i_1 - 1] = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-25)), (min((((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))), (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)57516))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_6 [i_2 - 1]), (((/* implicit */unsigned short) (signed char)5))))), (((((/* implicit */_Bool) min(((signed char)39), (var_12)))) ? (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) var_7))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_1 + 1])) - (7004))))), (((/* implicit */int) arr_6 [i_1 + 2])))))));
                            arr_30 [i_7] [i_4] [(unsigned short)1] [i_2] [i_1] = ((/* implicit */signed char) (unsigned short)18027);
                            arr_31 [(unsigned short)17] [i_2] [i_2 + 2] [i_2] [i_2] = ((/* implicit */signed char) min(((unsigned short)42970), (((/* implicit */unsigned short) arr_19 [i_1] [i_1] [i_3] [i_7]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            arr_36 [i_2 - 1] [i_1 - 1] [i_3 - 1] [(unsigned short)13] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8036)) / (((((/* implicit */int) arr_10 [(signed char)2] [i_2] [i_2 + 2])) << (((((/* implicit */int) (unsigned short)2044)) - (2042)))))));
                            arr_37 [i_1] [i_2] [i_8] = ((unsigned short) (signed char)127);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned short)7680)))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */int) (signed char)63)) * (((/* implicit */int) arr_35 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 2])))))))));
                        }
                        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 3) 
                        {
                            arr_42 [i_1 - 1] [i_1] [i_2 + 2] [i_3 + 1] [i_4] [i_4] [i_10] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) arr_23 [i_1] [i_4] [i_3 + 1] [i_2 + 1] [i_1] [i_1])) % (((/* implicit */int) var_13)))))), ((+(((/* implicit */int) ((signed char) arr_28 [i_1] [i_2] [i_2] [i_4] [(signed char)7])))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))))))));
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_45 [(signed char)17] [i_2 + 2] [i_2 - 1] [i_3] [i_4] [i_2 + 2] = ((signed char) ((((/* implicit */_Bool) (unsigned short)4032)) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_1 + 1] [i_3 - 1])) : (((((/* implicit */_Bool) (unsigned short)47904)) ? (((/* implicit */int) (unsigned short)7080)) : (((/* implicit */int) (unsigned short)60157))))));
                            arr_46 [i_2 - 1] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_38 [i_1] [i_1] [i_3] [i_4] [i_11]);
                            arr_47 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17621)) != (((/* implicit */int) max((min((var_0), (((/* implicit */unsigned short) (signed char)96)))), (((/* implicit */unsigned short) arr_16 [i_1 + 2] [i_2 - 1] [i_4] [i_11])))))));
                            arr_48 [i_1 + 2] [(signed char)19] [i_1 - 1] [(unsigned short)6] [i_1] [i_1 - 2] [i_1 + 2] = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)50)), (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)41172)))) * (((/* implicit */int) var_4))))));
                            arr_49 [i_1 - 1] [i_1 - 1] [i_3] [(signed char)9] [i_11] [i_3] = (unsigned short)34535;
                        }
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            arr_52 [i_1 - 1] [i_1 - 1] [(unsigned short)17] [i_1 - 1] [i_12] = ((/* implicit */unsigned short) arr_43 [i_1] [i_2 + 1] [i_3 + 1] [i_4] [i_3 - 1] [i_4]);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((min((((/* implicit */int) (unsigned short)54033)), (((((/* implicit */int) (unsigned short)65395)) ^ (((/* implicit */int) (unsigned short)61298)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_3 + 1] [i_12 + 2])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_3 - 1] [i_12 - 1])))))))));
                        }
                        arr_53 [i_4] [i_1] [i_1] [i_2 + 2] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)24391)) : (((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 2; i_13 < 18; i_13 += 3) /* same iter space */
    {
        arr_57 [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))))) ? (min((((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)16149)))), (((/* implicit */int) max((arr_14 [i_13]), (((/* implicit */unsigned short) (signed char)127))))))) : (min((((/* implicit */int) (signed char)-64)), (((((/* implicit */_Bool) arr_39 [(unsigned short)13])) ? (((/* implicit */int) arr_19 [(signed char)11] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_55 [i_13]))))))));
        arr_58 [i_13 + 1] = ((/* implicit */signed char) (unsigned short)11240);
    }
    var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned short)143))))))) ? (((/* implicit */int) (unsigned short)41161)) : (((/* implicit */int) ((((/* implicit */int) max(((signed char)6), (var_8)))) >= (((/* implicit */int) var_6)))))));
}
