/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207741
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((short)11118), (((/* implicit */short) (signed char)67)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((min((11383612306150384498ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7063131767559167116ULL), (6335957280595522731ULL)))) ? (-1494229683) : (((/* implicit */int) (signed char)-51)))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)69)) / (((/* implicit */int) (short)-9786))));
        arr_7 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((896561409U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9])))))) ? (((/* implicit */int) arr_1 [(signed char)2])) : (((/* implicit */int) max(((signed char)-67), (((/* implicit */signed char) (_Bool)1))))))))));
        arr_8 [i_1] = (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */int) arr_3 [i_1])) | (-1115712638))) : (((/* implicit */int) min((arr_1 [10ULL]), ((unsigned char)42)))))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */int) max((arr_5 [i_2]), (arr_5 [i_2])))), (((int) arr_5 [i_2])))))));
        var_16 ^= min(((-(((((/* implicit */_Bool) (signed char)50)) ? (6335957280595522712ULL) : (((/* implicit */unsigned long long int) -4)))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-5008)) ? (arr_9 [3LL]) : (((/* implicit */long long int) ((/* implicit */int) (short)5008))))))));
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_16 [i_3] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((signed char)-70), (((/* implicit */signed char) (_Bool)1)))))));
            var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) (_Bool)0)))) : ((+(74262566)))))));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -1694853369)) ? (((/* implicit */int) arr_17 [i_4] [(short)6] [(short)6])) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_4]), (((/* implicit */unsigned short) arr_10 [i_2] [i_4]))))) + (((int) arr_15 [i_2] [i_2]))))) : ((+(var_5)))));
            var_19 = ((/* implicit */_Bool) var_5);
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11277)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (-1239634933)))) & ((~(var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5]))) : (arr_9 [i_2]))))));
            arr_21 [(signed char)5] [(unsigned short)0] [i_5] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_15 [i_2] [i_2])))), ((-(-1694853372)))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) arr_18 [i_5] [i_5]))))) ? (((/* implicit */int) min((arr_18 [i_2] [i_5]), (arr_18 [0LL] [i_5])))) : (((/* implicit */int) arr_18 [i_2] [i_5]))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [14U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (((4294967288U) >> (((((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) arr_26 [i_6] [i_6 + 2])))) - (4902)))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_11))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) arr_24 [(_Bool)1] [i_6 - 2] [(signed char)14]);
    }
    for (unsigned int i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_34 [i_9 + 1] [i_11 - 1] [i_11 + 1] [i_9 + 1])) - (((/* implicit */int) arr_23 [i_9 - 3])))) + (((((/* implicit */int) arr_34 [i_9 + 1] [i_11 + 1] [6ULL] [i_11 + 1])) - (((/* implicit */int) arr_29 [i_9 - 2]))))));
                    var_27 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_11 - 1] [(short)1]))));
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_22 [i_11])))) >= (8800118854535665725ULL)));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((/* implicit */int) arr_26 [i_11 - 1] [i_9 - 2])))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) * ((((_Bool)1) ? (((/* implicit */int) (unsigned short)5980)) : (((/* implicit */int) arr_30 [i_9]))))))) ? ((~(((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])))) : (((((/* implicit */int) arr_22 [i_9 + 2])) + (((/* implicit */int) arr_22 [i_9 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_30 [i_9]) ? (12110786793114028934ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [22LL]))))))));
            var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7551084507784293928LL))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_33 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_13]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_9 - 1] [i_13])), (arr_23 [(signed char)6])))))));
            arr_40 [i_13] [i_13 + 1] [(_Bool)1] = ((/* implicit */short) ((long long int) max((arr_26 [i_13 + 1] [i_13 + 1]), (arr_38 [i_9] [i_9 + 1]))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_9 - 2] [i_13 + 1] [i_9 - 2] [i_13])) ? (max((((((/* implicit */unsigned long long int) 4294967277U)) - (8800118854535665709ULL))), (((/* implicit */unsigned long long int) (-(4103204366U)))))) : (((/* implicit */unsigned long long int) 7551084507784293931LL))));
            var_35 = ((/* implicit */unsigned char) arr_25 [i_9 + 2] [i_9 + 2]);
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 3) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 4)) >= (4294967288U))))));
                            var_37 -= arr_49 [i_9] [i_9] [i_9] [i_9 - 1] [i_9];
                            var_38 *= ((/* implicit */_Bool) max((2434700670U), (max((min((((/* implicit */unsigned int) (_Bool)0)), (191762950U))), (((/* implicit */unsigned int) arr_31 [(signed char)9]))))));
                            arr_52 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) max((-19), (((/* implicit */int) min((arr_32 [i_14]), (((/* implicit */short) (_Bool)1)))))));
                            var_39 = ((/* implicit */unsigned char) max((((unsigned long long int) (_Bool)0)), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_4)), (arr_44 [(short)10] [i_14] [i_15] [i_16]))), (((/* implicit */int) arr_32 [i_14])))))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */_Bool) min((var_40), (arr_51 [i_9] [i_9] [i_9 - 2] [17] [(unsigned short)14])));
            arr_53 [i_14] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_14]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_32 [i_14])) > (((/* implicit */int) arr_32 [i_14]))))) : (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_32 [i_14])) : (((/* implicit */int) arr_32 [i_14])))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_45 [i_9] [i_9] [i_9] [i_9 - 2]), (((/* implicit */int) arr_31 [i_9 + 2]))))) ? (((/* implicit */int) ((arr_50 [i_9] [16] [i_14] [i_14] [i_14] [i_9 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) : ((+(((/* implicit */int) (_Bool)1))))));
        }
    }
}
