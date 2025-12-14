/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200870
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
    var_18 *= ((/* implicit */signed char) var_4);
    var_19 = ((/* implicit */_Bool) (~((-(var_15)))));
    var_20 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [9ULL] = ((/* implicit */unsigned long long int) ((int) arr_11 [i_1] [i_1] [i_1] [i_1]));
                        var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_1)))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_10 [i_2] [i_2]))));
                            arr_16 [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_10 [i_0] [i_1])) ^ (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_3]))))));
                        }
                        for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) arr_9 [i_2 + 1] [i_1] [i_5 + 1] [i_3]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)5199)))))))));
                        }
                    }
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_0] [i_2]))));
                    var_26 = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]);
                    arr_19 [(signed char)10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_27 = ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0] [i_6] [i_7]))));
                var_28 *= ((/* implicit */unsigned int) arr_25 [i_0] [i_0]);
            }
            arr_26 [i_0] [(unsigned short)1] = (!(((/* implicit */_Bool) arr_22 [i_0] [i_6] [i_6 - 1])));
            arr_27 [i_6] = ((/* implicit */unsigned long long int) ((int) arr_0 [i_6 + 1]));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) ((arr_31 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_8])))));
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_14 [i_0] [i_8] [i_8])));
        }
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [0ULL] [i_9 + 3])) != ((-(-896472973)))));
            arr_35 [i_0] [i_9 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [12LL] [i_0] [i_0] [i_9 - 1]))));
            arr_36 [i_9] = ((/* implicit */int) var_11);
            arr_37 [i_0] [i_9] [i_9 + 2] = ((/* implicit */short) (-(-4808506349621180717LL)));
        }
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [(unsigned short)11] [i_10] [i_10])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (arr_38 [i_0] [i_0] [(short)9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 704529115U))))))))));
            arr_41 [i_0] [i_0] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4808506349621180717LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned long long int) 1031293279585381622LL)) : (arr_5 [i_0])))));
        }
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 2; i_12 < 24; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (signed char i_14 = 4; i_14 < 23; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) arr_44 [i_13]);
                        var_33 *= arr_47 [i_12];
                        var_34 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_43 [i_11])), (arr_46 [i_11] [i_12] [i_13] [i_14 - 4]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_47 [i_13])))));
                    }
                } 
            } 
        } 
        arr_51 [i_11] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_43 [i_11])) ^ (arr_46 [i_11] [i_11] [i_11] [1ULL])))) ? (((/* implicit */int) ((unsigned short) 1664919387511372193LL))) : (((/* implicit */int) arr_48 [i_11] [i_11])))) >= (max((((((/* implicit */_Bool) (unsigned short)48521)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (unsigned short)48521)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-126))))))));
        var_35 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_47 [i_11])), (((-4808506349621180717LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-11221))))))))));
        var_36 = ((/* implicit */long long int) arr_45 [i_11] [i_11]);
        var_37 = ((/* implicit */long long int) min((var_37), (((((/* implicit */_Bool) ((short) (-(12742802942447214109ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_48 [i_11] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_46 [i_11] [i_11] [i_11] [i_11]))) != (((/* implicit */unsigned long long int) arr_49 [i_11] [24ULL] [24ULL] [i_11])))))) : (((((((/* implicit */_Bool) arr_49 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11]))) : (var_11))) & (((/* implicit */long long int) ((unsigned int) (signed char)-22)))))))));
    }
}
