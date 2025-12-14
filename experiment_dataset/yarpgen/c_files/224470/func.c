/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224470
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
    var_18 = ((/* implicit */int) var_0);
    var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned long long int) -6513677617512145364LL))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_6))))) : (6513677617512145359LL))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)28))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6513677617512145373LL)) ? (-6513677617512145373LL) : (6513677617512145364LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6513677617512145364LL)) ? (6513677617512145364LL) : (5289830482957217679LL)))) : (var_12)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_21 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (-8517649264284781643LL)))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-888)) + (2147483647))) << (((var_15) - (3537507707932042841LL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_22 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)47))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((1911566371) << (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_6 [7LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_7 [i_4 + 1]))))));
                        var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) -6513677617512145400LL))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5] [i_7] [(unsigned char)12])) ? (((((/* implicit */_Bool) var_2)) ? (14634224215823557855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) (-(var_15))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 6513677617512145363LL)) || (var_6)))) != (((/* implicit */int) arr_13 [i_7 + 1]))));
                            var_28 = ((/* implicit */short) arr_8 [9U] [(signed char)13]);
                            var_29 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : (-6513677617512145373LL))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((long long int) (~(((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [2ULL] [i_9] [i_9]))))) != (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_26 [i_9] [i_7 + 2] [i_6] [i_5] [i_1]))))))));
                            arr_28 [i_1] [8ULL] [i_1] [18ULL] &= ((/* implicit */unsigned short) var_1);
                        }
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                    }
                    arr_29 [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                    var_32 = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */long long int) arr_17 [3U] [3U] [i_6])), (-6513677617512145364LL))), (-6513677617512145386LL))), (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507))) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)65533))))))))));
                    arr_30 [i_1] [i_1] [(unsigned short)1] [i_6] = ((((/* implicit */_Bool) arr_0 [i_6])) ? (((((/* implicit */int) arr_15 [i_5] [i_1])) + (((/* implicit */int) arr_15 [i_1] [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_17 [i_1] [i_5] [i_5])))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) (unsigned char)128);
        var_34 = ((/* implicit */signed char) ((((var_10) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_1 [(_Bool)1] [(_Bool)1])));
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
    {
        arr_33 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(13904328686501643896ULL))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (unsigned short i_13 = 2; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            arr_45 [10ULL] [14LL] [i_12] [5LL] [5LL] [i_13 - 1] [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12] [i_11] [4U] [i_13 - 2] [i_14])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)148))))) : ((+(arr_16 [i_10] [i_13])))));
                            var_35 = ((int) 5289830482957217664LL);
                            arr_46 [i_10] [i_11] [i_12] [i_13] [14LL] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 5289830482957217679LL)) || (arr_35 [i_10] [i_12] [i_13]))))));
                            var_36 = ((/* implicit */long long int) ((arr_40 [i_13 - 1] [(unsigned char)16] [i_13 + 2] [i_13 + 1]) == (((var_5) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_47 [(_Bool)1] = ((/* implicit */unsigned int) arr_41 [i_10] [i_10] [i_10] [i_10]);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_16 = 2; i_16 < 19; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) 16316262998032651131ULL);
                            arr_60 [i_10] [i_15] [i_15] [i_15] [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_57 [i_15] [i_17] [i_16] [i_15] [i_15]))));
                            arr_61 [i_15] [i_10] [i_16 - 1] [i_10] [i_15] [(_Bool)1] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) ^ (arr_39 [i_15])))) ? (((var_3) ? (arr_48 [i_10] [i_10] [(signed char)10]) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
                        }
                    } 
                } 
            } 
            arr_62 [i_15] [i_15] = ((/* implicit */int) min((arr_8 [i_15] [(signed char)9]), (((/* implicit */unsigned long long int) ((arr_18 [i_10] [i_15] [i_15]) != (arr_18 [i_10] [i_15] [i_15]))))));
            arr_63 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_35 [i_15] [i_15] [i_10])), (2089035436U)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))) : (max((arr_16 [(unsigned char)14] [7U]), (arr_16 [i_10] [i_15])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                var_38 -= ((/* implicit */short) (-(arr_40 [i_19] [i_15] [i_15] [13LL])));
                var_39 -= ((/* implicit */signed char) ((arr_36 [i_19] [i_10] [i_10]) >= (arr_48 [i_19] [i_15] [i_10])));
            }
            for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                arr_70 [i_10] [i_10] &= ((/* implicit */signed char) (~(var_15)));
                var_40 = ((/* implicit */int) ((unsigned char) (-((+(var_10))))));
            }
            for (signed char i_21 = 1; i_21 < 20; i_21 += 2) 
            {
                var_41 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_24 [i_15] [i_21] [17ULL] [(unsigned short)1] [i_15] [i_15])))));
                arr_73 [i_10] [i_15] [i_10] = ((/* implicit */unsigned int) max((max((var_12), (((/* implicit */unsigned long long int) arr_55 [i_15] [i_21] [i_21 - 1] [i_21 + 2] [i_21 + 2] [i_15])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) + (((((/* implicit */_Bool) arr_64 [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (arr_69 [11ULL] [i_15] [i_15]))))))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) arr_20 [i_10] [i_21 + 2] [i_21] [12] [i_21]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (2205931859U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-24586)) + (2147483647))) >> (((/* implicit */int) arr_20 [i_10] [i_21 + 1] [i_21 + 2] [i_21] [i_21])))))));
                arr_74 [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_10])) > (((/* implicit */int) (short)-888)))))));
                var_43 = ((/* implicit */int) (signed char)66);
            }
        }
        arr_75 [i_10] [i_10] = ((/* implicit */unsigned int) ((short) arr_25 [i_10]));
    }
    var_44 = ((/* implicit */_Bool) var_15);
}
