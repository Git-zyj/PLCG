/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43469
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 *= ((/* implicit */short) ((((unsigned int) ((((/* implicit */_Bool) -26)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_0 [i_0]))))) >> (((((/* implicit */int) min((((/* implicit */short) var_17)), (var_12)))) + (12554)))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) -1171992140)) - (var_7)))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) arr_6 [i_2] [i_0] [i_2])), (max((((/* implicit */short) arr_1 [i_2])), (arr_4 [i_0] [i_2] [i_2])))))), (max(((+(((/* implicit */int) var_17)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_0])) : (((/* implicit */int) (signed char)26)))))))))));
            var_21 *= ((unsigned char) ((((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]))) | (((/* implicit */int) arr_0 [i_0 - 3]))));
        }
        for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_7))));
                var_23 = ((/* implicit */unsigned int) var_1);
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned char) 8461770136000995484LL));
                        arr_19 [i_6] [i_3 + 1] [i_3 + 1] [i_6] = (+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_5] [i_3 + 2])) >= (((/* implicit */int) arr_0 [i_0 - 3]))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) + (((var_9) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116)))))))) ? ((~((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_3))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) max((arr_5 [(unsigned char)4] [(unsigned char)4] [i_7]), (((/* implicit */unsigned char) (signed char)-39))));
            var_27 = ((/* implicit */_Bool) (unsigned char)140);
        }
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_8] [i_8])) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2]))))) ? (max((arr_20 [i_0 + 2]), (((/* implicit */unsigned int) arr_6 [i_0] [i_8] [i_8])))) : (((/* implicit */unsigned int) ((int) 1171992139)))));
            arr_27 [i_8] = ((/* implicit */short) (~(max((((/* implicit */int) arr_25 [i_0 - 1] [i_0 - 2] [i_0 - 1])), (((((/* implicit */int) var_15)) << (((((/* implicit */int) arr_11 [i_8] [i_0])) - (39)))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (short i_11 = 2; i_11 < 16; i_11 += 4) 
                {
                    {
                        arr_36 [i_9] = ((/* implicit */signed char) var_4);
                        arr_37 [i_11 + 3] [i_9] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            arr_38 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_28 [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_20 [i_0]), (((/* implicit */unsigned int) (unsigned char)140))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_9])) & (((/* implicit */int) (unsigned char)115))))) : (min((var_7), (((/* implicit */unsigned long long int) var_12)))))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 2; i_12 < 18; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        arr_45 [i_0] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_12 - 2])) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_40 [i_0 - 4]))))) ^ (min((((/* implicit */long long int) arr_0 [i_13])), (var_6)))));
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */unsigned char) arr_23 [2]);
                            arr_48 [i_0] [i_0] [i_13] [i_14] [i_14] &= ((/* implicit */unsigned int) var_16);
                            arr_49 [i_13] [i_13] [i_13] [i_14] [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0 + 1] [i_12 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0 - 2] [i_0 + 1] [i_12 - 2]))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_1))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) & (max((((/* implicit */unsigned int) -1171992140)), (var_10)))))));
                        }
                        for (int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) ((min(((+(((/* implicit */int) (unsigned char)211)))), (((((/* implicit */_Bool) arr_28 [(unsigned short)9])) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) (short)-29234)))))) < (arr_41 [i_0 - 4])));
                            var_30 = ((/* implicit */signed char) var_13);
                            var_31 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 - 2]))) : (1663549941669830543LL))));
                        }
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_11) + (((/* implicit */int) var_13))))) | ((((!(((/* implicit */_Bool) arr_35 [1ULL] [6] [i_0] [i_0])))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_9])) && (arr_16 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                } 
            } 
            arr_53 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_21 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_14))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_9])) : (((/* implicit */int) arr_44 [i_9] [(signed char)17] [i_9] [i_0] [(signed char)17] [i_0]))))) : (((unsigned long long int) arr_35 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2]))))));
        }
    }
    /* vectorizable */
    for (short i_16 = 2; i_16 < 8; i_16 += 4) 
    {
        arr_56 [i_16] = (_Bool)1;
        arr_57 [i_16 + 1] [i_16 + 1] = ((/* implicit */unsigned char) (short)-15988);
        arr_58 [i_16 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_16 - 2] [i_16] [i_16]))) : (var_9))) == (((/* implicit */long long int) ((((/* implicit */_Bool) -79801594)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_54 [i_16])))))));
        var_33 = ((/* implicit */unsigned long long int) 63);
    }
    var_34 ^= ((/* implicit */short) var_0);
    var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_7))))));
    var_36 = ((/* implicit */short) var_15);
    var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) max((-1171992144), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (var_14)))))));
}
