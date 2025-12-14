/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53491
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)25079)) >= (arr_1 [i_0])))) >> (((((/* implicit */int) var_0)) + (13505)))));
        var_14 = ((/* implicit */unsigned long long int) (+(4294967295U)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -48501836)) ? (arr_7 [i_1]) : (((/* implicit */int) (short)-25092))))) || (((/* implicit */_Bool) arr_4 [i_1]))))), (((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_5 [i_1] [20ULL])))) << (((((/* implicit */int) ((unsigned char) var_8))) - (200)))))));
            arr_8 [i_1] = ((/* implicit */signed char) (+(max((var_5), (arr_4 [i_1])))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned long long int) ((arr_11 [i_1]) ^ (arr_12 [i_1] [i_1] [i_4])));
                        arr_20 [(short)17] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((var_4) ? (3549252777229652111LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_3] [10ULL] [(_Bool)1] [i_5]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) arr_11 [i_1]);
        }
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 += ((/* implicit */int) ((max((4784816189206212042ULL), (arr_16 [i_1] [i_6] [i_1] [i_6]))) == (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)25079)) ? (((/* implicit */int) (short)25078)) : (-21611663))))))));
            var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) -2147483633))), (max((arr_21 [i_1]), (arr_21 [i_1])))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_7])), (max((((((/* implicit */unsigned long long int) arr_13 [10LL] [(_Bool)1] [i_1])) * (arr_25 [12ULL]))), (((((/* implicit */_Bool) var_0)) ? (13268182524055964993ULL) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_7] [i_7]))))))));
            arr_27 [(unsigned short)20] [(unsigned short)20] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (max((2130303778816ULL), (15920935773944891130ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25079))) : (((unsigned int) var_3))));
            var_20 = ((/* implicit */unsigned int) var_7);
            arr_28 [i_1] [i_7] = ((/* implicit */unsigned char) var_9);
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) * (2130303778815ULL)))) ? (max((2130303778816ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_21 [i_1]), (((/* implicit */unsigned long long int) 805306368U))))) ? (((((/* implicit */int) (short)-25078)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
                        var_23 = min((((/* implicit */int) (short)25076)), (-1548059811));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */signed char) max((13LL), (((/* implicit */long long int) 1794008146U))));
    }
    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_34 [1ULL] [i_11]), (arr_34 [1LL] [16])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_11] [2ULL] [i_11] [i_11] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [15U] [i_12] [15U] [i_12]) >= (((/* implicit */unsigned long long int) 1814485924U)))))) : (max((((/* implicit */long long int) 1284585349U)), (arr_9 [2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_43 [i_11] [i_12]), (((/* implicit */long long int) arr_44 [0LL] [(unsigned short)1] [i_13])))))))))));
                    var_26 |= max((max((((unsigned long long int) 4294967286U)), (((/* implicit */unsigned long long int) ((arr_37 [(signed char)9]) | (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) arr_43 [i_11] [i_12])));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_12 [i_13] [i_12] [i_13]), (((/* implicit */int) arr_39 [10ULL] [8]))))), (max((((/* implicit */long long int) var_9)), (var_5)))))) ? (2130303778811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_11)), (arr_9 [i_12])))))))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((unsigned long long int) max((min((((/* implicit */unsigned int) (_Bool)1)), (1284585349U))), (((/* implicit */unsigned int) var_3)))))));
                }
            } 
        } 
        var_29 = arr_15 [i_11] [i_11] [i_11] [i_11];
        var_30 += ((/* implicit */short) min(((~(min((((/* implicit */unsigned long long int) arr_11 [i_11])), (arr_25 [i_11]))))), (((/* implicit */unsigned long long int) ((long long int) min(((unsigned char)87), (((/* implicit */unsigned char) arr_22 [i_11]))))))));
    }
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                {
                    arr_56 [i_14] [i_14] [13] = ((/* implicit */signed char) var_4);
                    arr_57 [i_14] [i_14] [0LL] = ((/* implicit */int) max((min((arr_15 [i_14] [i_16 + 1] [i_16] [i_14]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967271U)), (arr_52 [i_14] [i_15])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-25086))))), ((short)25062)))), (1196243464))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1LL)) ? (arr_16 [i_14] [i_15] [i_16] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) (_Bool)0)))))))), (((/* implicit */unsigned long long int) 2480481366U))));
                                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((3010381947U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-25086))))) ? (var_7) : (((/* implicit */long long int) max((939524096), (((/* implicit */int) (unsigned char)255)))))))) ? (((unsigned int) min((arr_7 [i_14]), (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((var_8), (((/* implicit */long long int) arr_59 [i_18] [i_18] [i_18] [i_17]))))))))))));
                                var_34 |= ((/* implicit */int) ((signed char) var_10));
                                arr_64 [i_17] [i_15] [i_16] [7ULL] [i_18] [i_16] [i_15] = ((/* implicit */int) ((((unsigned int) var_8)) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) 15365045970657354318ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (8001579616895866591ULL))) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) var_9))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-891307551), (-1)))))))));
    var_37 |= ((/* implicit */unsigned int) var_4);
}
