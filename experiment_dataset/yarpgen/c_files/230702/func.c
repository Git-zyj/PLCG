/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230702
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (19U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-111)))))));
        arr_5 [i_0] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) % (var_4))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_17 [i_3] [i_2 - 1] [i_0] [i_1] [i_0] = var_2;
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)1862)) : (((/* implicit */int) (unsigned short)63679))))) : (var_6)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_30 [i_4] [i_6] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) arr_29 [i_4] [i_4] [i_6] [4ULL]);
                        var_20 = (~(arr_0 [i_6] [(_Bool)1]));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_8 + 1]))))) ? (((/* implicit */long long int) max((19U), (((/* implicit */unsigned int) arr_11 [i_8 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8 + 1]))) - (var_6)))));
                            var_22 = (~((-(arr_14 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            arr_36 [i_6] [i_6] [i_4] [i_7] [i_6] [i_6] = ((/* implicit */short) (((~(((/* implicit */int) ((signed char) arr_2 [i_5]))))) * (((/* implicit */int) (_Bool)1))));
                            arr_37 [i_4] [i_5] [i_6] [i_7] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9])))))));
                            arr_38 [i_4] [i_4] [i_5] [i_4] [i_4] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_6] [i_6])))) ? ((~(arr_34 [i_4] [i_7] [i_6] [i_5] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63665))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_42 [i_4] [7ULL] [7ULL] [i_7] [i_10] = ((/* implicit */long long int) arr_25 [i_4] [i_10]);
                            arr_43 [i_10] = ((/* implicit */unsigned int) var_10);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((arr_22 [9LL] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_14] [10LL])))))), (min((arr_22 [(short)10] [i_13]), (var_13))))), (((/* implicit */long long int) var_5))));
                            var_24 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)139))))), (arr_52 [i_4] [i_11] [i_12] [i_13] [i_13] [i_14])))));
                            arr_54 [i_4] [i_11] [i_14] = ((/* implicit */signed char) arr_33 [7ULL] [(short)13] [i_4]);
                            arr_55 [i_11] [(short)10] [10ULL] [i_11] [i_11] = ((/* implicit */short) arr_33 [i_12] [i_11] [i_12]);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_15] [i_12] [i_4] [i_15] [i_15] [8LL] = ((/* implicit */unsigned long long int) max((arr_24 [i_12] [i_15]), (((/* implicit */unsigned int) ((arr_0 [i_15] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_15] [i_13] [10U] [i_12] [i_11] [i_4]))))))));
                            var_25 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (~(var_5)))), (max((((/* implicit */long long int) arr_32 [i_4] [i_4] [i_12] [i_12] [i_12] [i_15] [(unsigned char)0])), (var_13))))), (((/* implicit */long long int) arr_27 [i_4] [i_4] [i_12] [(short)2]))));
                            arr_60 [(_Bool)1] [i_15] [i_12] [i_13] [i_13] [i_15] [i_15] = ((/* implicit */int) max((arr_8 [i_13] [i_12]), (min((arr_52 [i_15] [2U] [(short)0] [i_12] [i_11] [i_4]), (arr_52 [i_15] [(_Bool)1] [i_15] [11ULL] [i_15] [i_15])))));
                            arr_61 [i_15] [i_15] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1359085319)));
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967272U)))) ? ((((_Bool)1) ? (arr_26 [i_13] [i_11] [1U]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_15]))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_6))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)1858))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_64 [i_4] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((unsigned short)1878), ((unsigned short)1870))))));
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 530642690U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((_Bool) arr_52 [i_4] [i_4] [i_11] [i_4] [i_16] [i_12])))));
                            arr_65 [i_16] [i_13] [i_12] [i_4] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_5))) ? (((((/* implicit */long long int) 1287711839U)) & ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_28 = ((/* implicit */unsigned short) var_9);
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            arr_68 [i_17] [i_11] [(unsigned char)1] [i_17] [(_Bool)0] = ((/* implicit */unsigned short) arr_24 [i_17 - 1] [i_17 - 1]);
                            var_29 = min((var_2), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_17)))) + (((/* implicit */int) var_17))))));
                            arr_69 [i_17] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_11] [i_12] [i_17])), (arr_8 [i_4] [i_4])))) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_20 [i_11] [i_11])))) : (((/* implicit */int) ((short) arr_40 [i_11] [i_11] [i_12])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) max((var_12), (arr_2 [i_17])))) : (arr_3 [i_17])))) : (var_9)));
                        }
                        var_30 = ((/* implicit */_Bool) (~(arr_51 [3ULL] [i_12] [i_4] [i_13] [i_4])));
                        var_31 = ((/* implicit */signed char) var_13);
                        arr_70 [10U] [i_11] [i_12] = ((/* implicit */long long int) (unsigned short)63674);
                    }
                } 
            } 
        } 
        arr_71 [0] = arr_23 [i_4];
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
    {
        arr_76 [i_18] [i_18] = ((unsigned long long int) var_16);
        arr_77 [i_18] = ((/* implicit */unsigned int) var_14);
        var_32 = (+(arr_6 [i_18] [i_18] [14U]));
        arr_78 [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
    }
    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) 
    {
        var_33 = min((((/* implicit */long long int) ((2472207240400848864ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8154)))))), (((((/* implicit */_Bool) (signed char)-111)) ? (arr_82 [i_19 + 2]) : (arr_82 [i_19 + 1]))));
        var_34 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) | (6391102735943962799ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_19]))));
    }
}
