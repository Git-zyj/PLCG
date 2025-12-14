/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206307
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
    var_15 = ((/* implicit */unsigned char) 9994174400099842840ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) max(((~(arr_0 [i_0 + 2] [i_0]))), (arr_0 [i_0 + 1] [i_1 - 1])));
                arr_5 [4ULL] [i_0] = ((((/* implicit */_Bool) arr_3 [i_0] [9LL] [i_1])) ? (var_13) : (18446744073709551615ULL));
                arr_6 [i_0] = arr_2 [8LL] [8LL];
                arr_7 [i_0] [(unsigned char)1] [i_0] = (((((~(arr_3 [i_0] [i_0 - 1] [1LL]))) << (((6001942938486773552ULL) - (6001942938486773547ULL))))) | (((min((3231807403128736432ULL), (var_13))) - (((((/* implicit */_Bool) 16788096030963655135ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_7))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2])))) ? (((((/* implicit */_Bool) 6601062835778726666ULL)) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2]))) : ((-(arr_10 [i_2] [i_2]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_3]);
            var_16 = ((/* implicit */unsigned long long int) var_6);
            arr_15 [i_2] [(unsigned char)0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((arr_8 [i_2] [i_2]), (arr_13 [i_2] [i_3])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8646810172185645364LL)) || (((/* implicit */_Bool) 11845681237930824949ULL))))), (arr_13 [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((4194303ULL), (((/* implicit */unsigned long long int) 4826605924308015804LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) 17451448556060672ULL);
                            var_18 += var_4;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((arr_12 [i_4 + 1] [i_4 - 1] [i_4 - 2]) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18429292625153490944ULL)))))) <= (((((/* implicit */_Bool) 9223369837831520256ULL)) ? (6601062835778726666ULL) : (0ULL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((unsigned long long int) (~(((((/* implicit */_Bool) 13389144818705360470ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_4 - 1] [i_2])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((long long int) 3972116853213014818ULL))))))));
                            arr_29 [13ULL] [i_4] [i_4] = ((/* implicit */long long int) max(((~((~(16788096030963655135ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_10)) == (min((1970466481637020143ULL), (18446744073709551615ULL))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((((unsigned char) arr_31 [i_4 - 2] [i_4 + 1])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8787503087616LL)) && (((/* implicit */_Bool) arr_31 [i_4 - 2] [i_4 + 1])))))));
                            arr_33 [9ULL] [8LL] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) 9223374235878031359ULL);
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) -8111685434373497516LL)) ? (((unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) var_5)) ? (1ULL) : (var_5))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) << (((/* implicit */int) (unsigned char)36)))))))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (long long int i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_25 -= var_14;
                            var_26 = ((/* implicit */unsigned char) (((~(((unsigned long long int) var_0)))) ^ (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -4617429386846373303LL)) : (8452569673609708776ULL))), (((/* implicit */unsigned long long int) (+(arr_21 [i_11] [i_10]))))))));
                            var_27 = ((/* implicit */long long int) (~((~(14474627220496536798ULL)))));
                            arr_45 [i_11] [20ULL] [i_11] [i_13] = ((/* implicit */unsigned char) -2155518651556547469LL);
                            arr_46 [i_13 - 2] [i_11] [i_12] [i_11] [i_11] [i_2] = (~(arr_43 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12] [i_12] [(unsigned char)16] [i_12]));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_36 [i_10] [i_10] [i_2]), ((unsigned char)42)))), (((((/* implicit */int) arr_36 [i_10] [i_2] [i_10])) & (((/* implicit */int) arr_36 [i_2] [i_10] [i_2]))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)246)) ? (0ULL) : (9291962279810516492ULL))))));
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_16] [i_16 + 1] [i_16] [i_16 - 1] [i_16])) || (((/* implicit */_Bool) 18446744073709551615ULL))))) <= (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) ((arr_35 [i_2] [16ULL]) <= (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [12ULL] [i_2] [i_15] [12ULL] [i_14] [i_2] [i_2])))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~((~(-2155518651556547469LL))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (max((10405068446493780610ULL), ((~(2759862858322474995ULL)))))));
                    }
                } 
            } 
            arr_53 [i_2] [3ULL] [i_14] = (~(max((arr_23 [i_2] [i_14] [i_2] [i_2] [13ULL] [i_2] [i_2]), (arr_23 [i_14] [i_14] [i_14] [4ULL] [i_2] [i_14] [i_2]))));
        }
    }
    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
}
