/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194673
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
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 -= ((/* implicit */int) var_10);
    var_22 ^= ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_2)))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [5ULL])), (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [6]))) : (15963727263224057273ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))));
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */signed char) (+(-2147483631)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] = var_9;
                    var_24 ^= ((/* implicit */unsigned int) arr_0 [(_Bool)1] [(_Bool)1]);
                }
            } 
        } 
        var_25 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned int) var_0))) || ((!(((/* implicit */_Bool) var_1)))))), (((((((/* implicit */_Bool) var_18)) ? (4035225266123964416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)18] [i_0]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-50)) | (arr_6 [i_0]))))))));
        arr_10 [(_Bool)1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) var_18))), (((3930948228U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (max((2881342342U), (((/* implicit */unsigned int) (unsigned short)65535)))))) : (max((((var_3) ? (2881342323U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) ((-1) & (((/* implicit */int) (signed char)106))))))));
    }
    for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
    {
        var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1413624927U)) ? (-228623895) : (66846720))) > (max(((-(var_1))), ((-(((/* implicit */int) var_14))))))));
        var_27 -= ((/* implicit */_Bool) arr_11 [(signed char)6]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [i_5] [10U] = ((/* implicit */signed char) arr_3 [i_5 + 1] [i_5 + 1]);
                    var_28 = ((/* implicit */signed char) ((-1) == (((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_22 [i_4] = var_13;
        var_29 ^= ((/* implicit */int) var_7);
        var_30 = ((/* implicit */unsigned int) ((signed char) arr_5 [i_4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_4] [i_7] [i_4] [i_9] = ((/* implicit */int) var_13);
                        arr_32 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1413624946U)) ? (((/* implicit */int) (_Bool)1)) : (-2147483644))) % (-1)));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_4] [4ULL] [i_4] [i_4] = ((/* implicit */signed char) var_4);
                        var_31 -= ((arr_5 [i_8] [i_7] [i_7 - 1]) ? (((/* implicit */int) (_Bool)1)) : (arr_35 [i_10] [i_7 - 1] [i_10 - 1]));
                        arr_37 [i_7] [(signed char)12] [i_4] [(signed char)1] [i_4] [(signed char)12] = ((/* implicit */int) var_3);
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1645227463))));
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_12] = (-(2881342334U));
                            arr_44 [i_12] [i_12] [i_8] [i_12] [i_12] |= ((((/* implicit */_Bool) -29)) ? (((/* implicit */int) arr_26 [i_7 - 1] [i_11 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_3))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_33 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13] [(_Bool)1] [i_8] [i_7 - 1]))) != (1413624946U));
                            arr_47 [6] [i_4] [i_13] [i_13] = ((/* implicit */unsigned short) 4294967288U);
                            var_34 = ((/* implicit */unsigned short) var_12);
                        }
                        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            arr_51 [i_4] [i_4] [i_8] [i_7] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (signed char)122)))));
                            var_35 ^= ((/* implicit */signed char) (((_Bool)1) || (arr_5 [i_7 - 1] [i_11 - 1] [i_8])));
                            arr_52 [i_4] [i_4] [i_8] [0U] [i_4] = ((/* implicit */int) var_3);
                        }
                    }
                    var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)120)) % (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 15; i_15 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_58 [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (arr_55 [i_15] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
            var_37 = ((/* implicit */_Bool) max((2881342319U), (((/* implicit */unsigned int) ((_Bool) ((unsigned int) var_16))))));
            arr_59 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)36776))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (arr_11 [i_15]) : (((/* implicit */int) ((((/* implicit */int) (signed char)112)) != (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            var_38 -= ((/* implicit */signed char) max((arr_8 [15ULL] [i_15] [15ULL] [i_17]), (((((/* implicit */unsigned int) arr_53 [i_17])) | (arr_3 [i_17] [i_17])))));
            var_39 = ((/* implicit */unsigned short) -1955943079);
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    for (signed char i_20 = 2; i_20 < 13; i_20 += 4) 
                    {
                        {
                            var_40 ^= ((/* implicit */int) ((max((arr_60 [i_20 - 1]), (arr_60 [i_20 - 2]))) / (((/* implicit */unsigned int) var_11))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (_Bool)1))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_69 [i_20 - 2] [i_17]), (arr_69 [i_20 - 1] [i_17])))) ? (((unsigned int) (!((_Bool)1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_72 [(_Bool)1] [i_17] [i_20 - 2] [i_20 - 2] [(_Bool)1] [i_20])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_43 -= ((/* implicit */_Bool) ((((unsigned int) arr_65 [i_15] [i_15] [i_15])) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_62 [i_21])) ^ (((/* implicit */int) var_19)))))));
                var_44 ^= ((/* implicit */unsigned long long int) ((signed char) (!((!(((/* implicit */_Bool) arr_4 [i_15] [i_17] [i_21])))))));
            }
            for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                arr_80 [(unsigned short)0] [i_17] [i_17] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) -1245496161)) ? (((/* implicit */int) (_Bool)1)) : (var_2))))), (var_4)));
                arr_81 [i_15] [i_15] [11U] = ((/* implicit */int) ((_Bool) (-((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))));
                arr_82 [i_15] [i_17] [i_17] = var_8;
            }
        }
        var_45 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-37)), (min((arr_8 [(_Bool)1] [i_15] [i_15] [i_15]), (((/* implicit */unsigned int) var_15))))));
        var_46 |= arr_74 [i_15] [i_15] [i_15] [i_15];
        arr_83 [13ULL] = var_3;
        arr_84 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2881342352U)) ? (((/* implicit */int) max((arr_1 [i_15] [i_15]), (((4294967295U) > (((/* implicit */unsigned int) 1576784686))))))) : (((/* implicit */int) var_15))));
    }
    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) (_Bool)1)), (11U))))) ? (((/* implicit */int) ((_Bool) (-(-1846376871))))) : (((/* implicit */int) var_0))));
}
