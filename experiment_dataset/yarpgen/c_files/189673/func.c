/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189673
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
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2953218363449852682LL)), (var_15)))) ? (((((/* implicit */_Bool) var_12)) ? (1736623662) : (-8))) : (((8) * (((/* implicit */int) (short)-26570)))))) : (var_16)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_2 [i_2]))));
                    arr_8 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)242)) | (((/* implicit */int) var_1))))), (((unsigned long long int) 2252378054U))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_3]))));
        arr_13 [i_3] = ((/* implicit */unsigned short) var_4);
        var_20 = ((long long int) var_6);
        /* LoopSeq 4 */
        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
            var_21 -= min(((-(((/* implicit */int) arr_1 [6U] [i_4 + 1])))), (((((/* implicit */_Bool) arr_1 [i_4] [i_4 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_4 - 1] [i_4 + 1])))));
            arr_17 [i_3] = ((/* implicit */int) 4294967293U);
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        {
                            arr_25 [i_3] [i_4 - 1] [i_4 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 6471124691472440620LL)), (16344097736940227648ULL)));
                            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_10 [i_5]);
                            arr_27 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) arr_24 [i_5] [i_6]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) arr_4 [i_3] [i_3] [i_5]))))) ? (((arr_24 [9ULL] [i_3]) << (((var_7) - (6824941092968500519ULL))))) : (((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) ^ (var_7))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            arr_39 [i_3] [i_9] = arr_36 [i_10] [i_3] [i_3] [i_3];
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_9 [(_Bool)1]))) % (((/* implicit */int) ((signed char) var_3)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_9 [i_8])))), (max((arr_31 [i_3]), (arr_38 [i_3] [i_8] [i_8] [i_8] [i_8])))))) : (min((arr_5 [i_3] [i_8] [i_3] [i_10]), (((/* implicit */unsigned long long int) arr_23 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9]))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */int) (_Bool)1);
            arr_40 [i_3] [i_3] [i_3] = min((arr_18 [(signed char)9]), (((/* implicit */int) ((((/* implicit */unsigned int) ((int) 6272746754365626250LL))) != (min((2042589242U), (((/* implicit */unsigned int) (unsigned char)185))))))));
            arr_41 [i_3] [i_8] = ((/* implicit */unsigned short) min((arr_2 [i_8 + 1]), (((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 3])))))));
            var_25 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_20 [i_3] [2LL] [2LL])) ? (-1217998591) : (1217998579))), (arr_20 [i_3] [i_3] [i_3]))) - (((/* implicit */int) (_Bool)0))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_45 [i_12] = ((/* implicit */short) (~(arr_5 [i_3] [i_3] [i_3] [i_12])));
            arr_46 [i_3] [i_12] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3])) * (((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_12]))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
        {
            var_26 *= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) arr_48 [i_3] [i_3])), (min((((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_13])), (var_7))))));
            var_27 = ((((/* implicit */_Bool) min((arr_9 [i_3]), (arr_9 [i_3])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_18)), (arr_9 [i_3])))) : (((/* implicit */int) arr_9 [i_3])));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        arr_56 [i_15] [i_14] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)22))));
                        var_28 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((int) arr_53 [i_15] [i_13] [i_3]))), (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_3]))) % (var_10))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_16] [i_13] [i_16] [i_17] [(unsigned char)4] [i_3])) * (arr_57 [i_3] [i_3] [i_3])));
                        arr_61 [i_3] [i_16] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_18 [i_13])), ((~(arr_21 [i_13] [i_13] [i_16] [i_17] [i_3]))))), (((/* implicit */unsigned int) ((signed char) arr_5 [i_3] [i_3] [i_17] [i_3])))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_15) << (((arr_52 [i_3] [i_3] [i_3] [i_3]) - (6234162981648457652LL)))))) ? (((((/* implicit */_Bool) ((arr_54 [i_3]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_43 [i_3] [i_3]))))) ? (((/* implicit */int) var_18)) : (arr_42 [i_3] [i_3]))) : (((/* implicit */int) arr_23 [i_3] [(signed char)0] [4] [i_3] [i_3] [i_3])))))));
    }
    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 4) 
    {
        arr_64 [i_18] [i_18] = ((/* implicit */_Bool) arr_0 [i_18] [i_18]);
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (2422592180U)));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1084411258)), (-6771061273427083846LL)))) ? (max((13134242120042578775ULL), (((/* implicit */unsigned long long int) arr_70 [i_18] [i_18] [i_19])))) : (((/* implicit */unsigned long long int) (~(var_13))))));
                    var_33 = arr_66 [i_18] [i_19];
                    arr_71 [i_19] [i_19] [i_19] = var_5;
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) arr_1 [i_18] [i_18]);
        var_35 = ((/* implicit */long long int) min((arr_70 [i_18] [i_18] [i_18]), ((~(((/* implicit */int) arr_63 [i_18]))))));
    }
}
