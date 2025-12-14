/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33346
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_6))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_10) ? (var_2) : (((/* implicit */int) (unsigned short)5820)))), (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max(((unsigned short)59715), ((unsigned short)59715)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)59715)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 10003865457044289174ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)59742))))) : (8442878616665262441ULL)));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((10003865457044289175ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (-1925168655)))) ? (((((/* implicit */unsigned long long int) (+(1648088119U)))) & ((((_Bool)1) ? (10003865457044289169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) / (((/* implicit */int) (unsigned short)5820))))))))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_10))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_0] [i_3] [i_4] [i_5] [i_3 + 3] [i_5] = max(((-(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_4 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) ? ((-(var_7))) : (((/* implicit */int) arr_9 [i_0])))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) * ((+(arr_12 [i_4])))))));
                        }
                    } 
                } 
            } 
            var_22 = ((((/* implicit */_Bool) (~(min((var_9), (((/* implicit */unsigned long long int) arr_9 [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (10003865457044289194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0])), ((unsigned short)59716)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_6] [i_2])) : (((/* implicit */int) var_8))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((((/* implicit */int) arr_5 [i_0] [i_0])) | (((/* implicit */int) var_10)))) : (arr_4 [i_0])));
                var_24 = ((_Bool) arr_4 [i_0]);
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) arr_14 [i_0] [i_0] [9] [i_0] [i_0]);
                    var_26 = ((/* implicit */int) (~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        arr_28 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)10894)) & (((/* implicit */int) (short)-20385))));
                        arr_29 [(_Bool)1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_24 [2] [2] [i_0] [i_0])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)24))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10893))));
                        var_28 = (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [(_Bool)1])));
                    }
                    for (short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_15 [i_10] [i_8] [i_6] [i_10] [i_10]))));
                        var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0]))) / (arr_12 [(unsigned char)3])));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        arr_35 [(_Bool)1] [i_2] [(short)19] [i_0] [(signed char)5] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5820))));
                        var_31 = ((/* implicit */short) (~(1524597510)));
                        arr_36 [i_0] = ((/* implicit */int) arr_25 [i_0] [(short)15] [i_8] [i_11]);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_21 [i_2] [i_2] [8] [i_8] [i_11]) : (((/* implicit */int) var_10))));
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(unsigned short)13] [i_2] [(unsigned short)13] [i_8] [i_11])))))));
                    }
                    var_34 = arr_33 [i_0] [i_2] [i_6] [i_8] [i_8] [i_0];
                }
                for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_35 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10] [i_0]);
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8442878616665262441ULL)) ? (arr_11 [i_0] [i_0] [i_2] [i_0] [i_6] [3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_6] [i_6])))))));
                    arr_41 [i_0] [i_0] [i_2] [(short)3] [i_0] [i_12] = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [11U] [i_2] [(_Bool)1] [i_12] [i_0]))) * (arr_11 [(_Bool)1] [i_2] [i_2] [i_2] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_0] [i_2] [i_2])))))));
                }
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_2] [i_0])))))));
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_38 |= ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(_Bool)1] [i_2])))))))), ((short)10893)));
                var_39 = ((/* implicit */unsigned long long int) var_6);
                var_40 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_13])) <= (((/* implicit */int) ((arr_19 [i_0] [i_13]) || (((/* implicit */_Bool) (short)32760)))))));
            }
            for (short i_14 = 2; i_14 < 19; i_14 += 1) 
            {
                arr_48 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13688))) : (5392394258985356808ULL)));
                arr_49 [(short)2] [i_2] [i_14] [i_0] = ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_42 [i_2] [i_14])) <= (((/* implicit */int) (unsigned char)181)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_14] [(short)19] [i_14 - 2] [i_14 - 2] [i_2] [i_0])) ? (arr_26 [i_0] [i_2] [i_2] [i_14 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (max((((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_14] [i_0])), (arr_18 [i_0] [(short)14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_14] [i_2] [i_0])) ? (((/* implicit */int) (short)-13678)) : (((/* implicit */int) (short)32767)))))));
                arr_50 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_2]);
            }
            arr_51 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_2])) << (((((/* implicit */int) ((((/* implicit */_Bool) (short)12889)) && (((/* implicit */_Bool) -493067665))))) >> (((((/* implicit */int) var_14)) + (18366)))))));
        }
        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_41 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_15])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0] [i_15]))))));
            var_42 ^= ((/* implicit */unsigned char) arr_32 [i_0] [i_0] [i_0] [i_15]);
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                var_43 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)-32760), (((/* implicit */short) arr_24 [i_0] [i_15] [(short)2] [i_16]))))), (((((/* implicit */int) var_4)) & (((/* implicit */int) var_10))))));
                var_44 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_17 [i_0] [i_15] [i_0] [i_0])) ? (8442878616665262415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_5)))))));
                var_45 = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_53 [i_0])), ((short)-32760)));
            }
            var_46 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-32767)), (8442878616665262415ULL)));
            var_47 |= ((/* implicit */unsigned int) arr_44 [i_0] [i_15] [i_0] [i_0]);
        }
        var_48 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)13688)))))));
        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1608)), (var_3))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_50 = min(((unsigned short)59722), (((/* implicit */unsigned short) (short)19285)));
        /* LoopSeq 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 2; i_19 < 22; i_19 += 4) 
            {
                for (short i_20 = 1; i_20 < 23; i_20 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            arr_70 [i_18] [i_20] [i_19] [(unsigned char)8] [i_18] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_68 [i_21] [i_21] [i_21] [(short)20])) && (((/* implicit */_Bool) arr_68 [i_17] [i_19 + 3] [i_20 - 1] [i_21 - 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-2969))) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (1711481547U)))))));
                            arr_71 [i_17] [i_18] [i_19] [(unsigned char)22] [i_20] [(unsigned char)22] [i_19] = ((/* implicit */unsigned long long int) arr_62 [i_17] [i_19 + 1] [i_20]);
                            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_62 [(short)14] [i_20 - 1] [i_20 - 1])), (1690733093U)))) ? (((((/* implicit */_Bool) min(((short)32763), (((/* implicit */short) arr_60 [i_17] [i_20] [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_17] [i_18] [i_19] [i_20] [i_21]))) : (8442878616665262415ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_69 [i_17] [i_18] [i_19 - 1] [i_19 + 1] [i_21 - 1])) : (((/* implicit */int) var_10)))))));
                        }
                        arr_72 [i_17] [i_18] [(unsigned short)12] [i_17] = ((/* implicit */unsigned short) var_14);
                        arr_73 [i_20] [i_18] [i_18] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4177)) >> (((((((((/* implicit */_Bool) -1980971586)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59722))) : (1976230924541042441ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)5821))))))) - (59720ULL)))));
                    }
                } 
            } 
            var_52 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)5821))));
        }
        /* vectorizable */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            var_53 = ((/* implicit */int) var_5);
            arr_77 [i_17] [i_22] [i_22 - 1] = (~(((/* implicit */int) (unsigned short)5821)));
            var_54 = ((/* implicit */short) var_6);
            arr_78 [i_22] [i_22] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_61 [i_17] [(signed char)18] [(signed char)18])) ? (((/* implicit */int) (short)-13702)) : (((/* implicit */int) (unsigned char)207)))) * (((((/* implicit */_Bool) (short)-2986)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            var_55 = ((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1])) - (((/* implicit */int) arr_68 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1]))));
        }
        for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
        {
            var_56 -= ((/* implicit */unsigned int) min((max((arr_63 [i_17] [i_23] [i_23]), (((/* implicit */int) arr_62 [i_17] [i_17] [i_23])))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5821))))) || (((/* implicit */_Bool) min((arr_64 [i_17] [i_23]), (((/* implicit */int) arr_66 [i_23] [(_Bool)1] [i_17]))))))))));
            arr_81 [i_17] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)176)))) < (((/* implicit */int) (short)(-32767 - 1)))));
            arr_82 [i_17] = ((/* implicit */_Bool) min((-1638081808), (((/* implicit */int) (_Bool)1))));
            var_57 = ((max((((/* implicit */int) (short)7679)), (-1546610988))) + (((((/* implicit */int) arr_66 [i_17] [i_23] [i_23])) + (((/* implicit */int) arr_66 [i_17] [i_17] [i_23])))));
        }
    }
    var_58 = ((/* implicit */int) max((max((1077003245U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) var_13))));
}
