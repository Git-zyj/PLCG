/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37339
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0 + 2] [(unsigned char)17] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(1817092111)))) ? (((unsigned long long int) (unsigned char)147)) : (((/* implicit */unsigned long long int) min((-596641180026908229LL), (((/* implicit */long long int) var_14))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_1 [i_1])))))));
            arr_6 [i_0 - 1] = ((/* implicit */short) (+((+(arr_0 [13])))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)222)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)33224)))) : (arr_0 [i_1])));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (signed char)127))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_18 ^= ((/* implicit */signed char) (((+(arr_0 [(unsigned short)11]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61833)))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_19 ^= ((unsigned short) ((unsigned short) arr_0 [i_3]));
                    var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47220))) ^ (1580210635246393621ULL)));
                }
                for (short i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    arr_19 [(unsigned short)9] [(unsigned short)9] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (1610612736) : (((/* implicit */int) var_12))))))));
                    arr_20 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) var_8);
                    var_22 = ((/* implicit */_Bool) 27);
                }
                for (short i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_2] = ((/* implicit */unsigned short) (short)11458);
                    arr_24 [i_0 + 1] [i_6] [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)512)) ? (((/* implicit */int) (unsigned short)49483)) : (((/* implicit */int) (signed char)127))));
                }
                arr_25 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) 932692499)))));
                arr_26 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (((unsigned long long int) arr_15 [i_0] [i_2] [i_2] [i_2]))));
            }
            var_23 = ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 1629284170)) : (16726932143542794572ULL)));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [6ULL] [i_0 + 2] [i_0 + 2] [i_8 - 1] [(unsigned short)18])) == (((/* implicit */int) arr_31 [(signed char)3] [i_0 + 2] [i_0 + 2]))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) arr_15 [18] [18] [18] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_7] [i_0] [i_7]))))))));
            var_27 = ((/* implicit */unsigned long long int) (!(((var_9) < (((/* implicit */int) (signed char)-78))))));
            arr_35 [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)64)) | (((/* implicit */int) (signed char)-63))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_0] [i_7] [i_0]))))) : (arr_18 [i_0 + 1] [i_0 + 2])));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            arr_38 [i_10] [i_0] [i_0] = ((/* implicit */short) (+(min(((+(((/* implicit */int) arr_30 [i_0] [i_0])))), (((/* implicit */int) ((_Bool) -33985655)))))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_34 [i_0] [i_10] [i_0] [i_0]))));
            arr_39 [i_10] = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_0)))), ((+(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [(signed char)9]))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 2] [i_0] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-1LL)))), (((((/* implicit */_Bool) var_10)) ? (arr_27 [i_0] [(signed char)6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [0ULL]))))))))));
            /* LoopSeq 3 */
            for (signed char i_12 = 2; i_12 < 18; i_12 += 1) 
            {
                var_30 = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_12 - 2] [i_12 - 2] [i_0] [i_0 + 3] [i_0])) < (((/* implicit */int) (unsigned char)229))))))));
                /* LoopNest 2 */
                for (short i_13 = 4; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            arr_51 [i_14] [i_11] [i_12] [i_14] [i_0 - 1] [i_12] [i_13] = ((/* implicit */unsigned short) arr_16 [i_0] [i_11] [i_11] [i_11]);
                            var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)47395)) << (((-656026820) + (656026831)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
            {
                arr_56 [i_0] [i_0] [i_11] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_32 [i_15 + 2] [i_15 + 1] [i_15 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_32 [i_15 + 2] [i_15] [i_15 + 1] [i_0 + 2])) : (((/* implicit */int) arr_32 [i_15 + 3] [i_0 + 2] [i_15 + 1] [i_0 + 2])))), (((/* implicit */int) ((unsigned short) arr_30 [i_0] [i_15 + 3])))));
                var_32 -= ((/* implicit */signed char) max(((+(arr_15 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) max((arr_11 [i_0] [(unsigned short)13] [i_11]), (((/* implicit */unsigned short) arr_47 [i_0 + 1] [i_0 + 1] [i_15 + 2] [i_15])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 4; i_16 < 17; i_16 += 3) 
            {
                arr_60 [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_16]);
                var_33 = ((/* implicit */int) var_12);
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 15; i_17 += 4) 
    {
        arr_64 [i_17 - 1] = ((/* implicit */signed char) ((-664720217) | (((/* implicit */int) (signed char)-5))));
        var_34 = ((/* implicit */signed char) arr_21 [1] [i_17] [i_17] [(signed char)15]);
        /* LoopSeq 1 */
        for (short i_18 = 4; i_18 < 15; i_18 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)10)))) != (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_55 [i_17] [i_17 + 3] [i_17 - 1] [i_17]))))));
            var_36 += ((/* implicit */unsigned int) arr_33 [i_17]);
        }
    }
    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        arr_72 [i_19] = ((/* implicit */signed char) arr_71 [i_19]);
        var_37 = ((/* implicit */short) ((unsigned short) min((arr_69 [i_19] [i_19]), (((/* implicit */unsigned long long int) arr_71 [i_19])))));
    }
    var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)64550)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (128) : (var_9)));
    var_39 *= ((/* implicit */unsigned short) (-((+(((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
    var_40 = ((/* implicit */unsigned char) 2847811253985457878ULL);
}
