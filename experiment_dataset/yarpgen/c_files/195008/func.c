/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195008
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
    var_15 = ((/* implicit */_Bool) 6093153628067258484ULL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) ((unsigned char) ((arr_5 [i_3] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (6093153628067258478ULL))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((int) max((6093153628067258459ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_0] [(short)10] [(short)10] [i_0])), (arr_0 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [4LL] [4LL])), (6093153628067258478ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
        arr_11 [i_0] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63921))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (12353590445642293138ULL)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) var_9);
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4]))));
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) 12353590445642293131ULL);
                    arr_22 [i_7] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14015)) / (((/* implicit */int) (_Bool)1))))) ? ((+(arr_15 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -754192788))))));
                    arr_23 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (754192791) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_6] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_5] [9U])), (var_6)))) ? (((unsigned long long int) arr_8 [i_5] [i_5] [i_7] [i_7] [i_5])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6] [i_7])) ? (arr_17 [i_6] [i_7]) : (((/* implicit */int) arr_4 [(short)3] [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)39))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) var_3);
            arr_28 [i_8] = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_5] [i_5])) >= (((/* implicit */int) arr_18 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) arr_18 [i_8] [i_8] [i_5])) : (((((/* implicit */_Bool) -754192788)) ? (((/* implicit */int) arr_5 [i_5] [i_8])) : (((/* implicit */int) arr_18 [i_5] [13ULL] [i_8]))))));
            var_21 ^= ((/* implicit */unsigned short) (unsigned char)2);
            arr_29 [i_8] [i_8] = ((/* implicit */short) (~(0LL)));
        }
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (short i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_10] [i_11])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))) ? ((+(arr_34 [i_10] [i_9] [i_11 + 2] [i_9]))) : (((/* implicit */unsigned int) 754192795))));
                            var_23 += ((/* implicit */unsigned short) ((short) (-(arr_21 [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 - 2]))));
                            arr_38 [i_12] [i_11] [i_12] [i_12] [i_9] [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_11 - 2] [i_11 + 2] [i_11 - 2] [i_12] [i_11 - 2])), (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_10])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11 - 2] [i_9]))) : (((unsigned int) min((((/* implicit */int) (unsigned short)65505)), (arr_0 [i_12]))))));
                            var_24 = ((int) arr_7 [i_5] [(short)18] [i_10] [i_11 - 2]);
                        }
                        var_25 |= ((/* implicit */int) (~(12353590445642293119ULL)));
                        arr_39 [(_Bool)1] = ((/* implicit */unsigned long long int) (+(6761147952301936359LL)));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1073741822U)) && (((/* implicit */_Bool) arr_34 [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_11 - 1])))) ? ((-(((((/* implicit */_Bool) (unsigned short)33768)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-44)))))) : (((((/* implicit */_Bool) ((signed char) arr_21 [i_5] [i_9] [i_10] [i_11]))) ? ((-(((/* implicit */int) arr_36 [i_11] [i_10] [i_10] [i_9] [i_11])))) : (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_10])) : (((/* implicit */int) arr_2 [i_9]))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                var_27 += ((/* implicit */short) ((signed char) ((_Bool) arr_8 [4U] [i_9] [i_9] [i_9] [i_5])));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        {
                            arr_46 [i_5] [i_9] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)35)) : (((/* implicit */int) (unsigned short)31767))));
                            var_28 -= ((/* implicit */unsigned char) arr_21 [i_9] [4LL] [i_9] [i_9]);
                            var_29 += ((/* implicit */short) arr_36 [i_9] [i_14] [i_5] [i_5] [i_9]);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_16 = 3; i_16 < 15; i_16 += 2) 
        {
            var_30 = (-(((/* implicit */int) (_Bool)1)));
            arr_51 [3] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_16] [i_16 - 3] [i_16 + 4] [i_16 + 1] [i_16])) << (((((/* implicit */_Bool) arr_7 [i_16 - 3] [i_16 - 1] [i_5] [i_5])) ? (((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_16] [i_5])) : (((/* implicit */int) arr_6 [i_16] [i_5] [(_Bool)1] [i_5]))))));
        }
    }
    for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_56 [i_17] = ((/* implicit */_Bool) arr_54 [i_17]);
        var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [(short)23]))))) ? (((int) arr_53 [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_17])))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (+(6093153628067258489ULL))))) ? ((-(((/* implicit */int) ((unsigned short) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_17])))))));
        var_33 = ((/* implicit */int) max((var_33), (((int) (unsigned short)31767))));
    }
    var_34 = ((/* implicit */short) var_3);
}
