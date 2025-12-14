/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235601
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
    var_14 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))));
    var_15 = (unsigned short)4598;
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [(short)2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((24U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */long long int) 0)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1] [i_0])) ? (288984453058204293LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) (((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) >= ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
        arr_12 [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) var_2)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))), (((((/* implicit */_Bool) min((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : ((-(((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */short) var_1);
    }
    for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_6))))) | (7667112895467258536LL)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_4 + 1] [i_4 - 2]) ^ (arr_2 [i_4 + 2] [i_4 - 2])))) ? (((/* implicit */int) arr_6 [(signed char)0] [(unsigned short)22] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (300131374) : (((/* implicit */int) var_11))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [(_Bool)1] [(_Bool)1]) == (((/* implicit */unsigned long long int) -9215225920235597289LL)))))) : (arr_4 [4LL] [4LL])))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_5] [i_5]))))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((arr_9 [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]) <= (arr_9 [i_6 - 1] [(short)23] [i_6 - 1] [i_6 - 1])))), ((~(((/* implicit */int) var_10))))));
            var_23 = ((/* implicit */short) ((max((1146475729), (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) min((arr_15 [i_6 - 1] [i_6 - 1]), (((/* implicit */short) arr_19 [i_6 - 1] [i_6 - 1] [i_6 - 1])))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) (short)32767);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max(((~((~(0LL))))), (((/* implicit */long long int) arr_7 [i_7]))));
                            var_26 = ((/* implicit */unsigned char) max((var_1), (min((((var_1) / (((/* implicit */long long int) -1146475729)))), (((/* implicit */long long int) -1146475717))))));
                            var_27 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1])), (-2147483638)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_28 *= ((/* implicit */int) max(((signed char)-70), (((/* implicit */signed char) (_Bool)1))));
                    arr_40 [i_5] [15] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_22 [i_5] [i_5] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_23 [i_5] [i_7 - 1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-1))))));
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7 - 1] [i_14] [i_13 - 1]))))) < ((+(((/* implicit */int) var_13))))));
                        arr_45 [i_7] [i_7] [i_7] [i_7] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13] [i_13 - 1] [i_13 - 1] [i_7] [i_13])) ? (((/* implicit */int) arr_44 [i_13] [i_13] [i_13 - 1] [i_7] [(signed char)16])) : (((/* implicit */int) arr_5 [i_7] [i_13] [i_13 - 1] [i_13]))))) ? (((arr_5 [i_7] [i_13] [i_13 - 1] [i_7]) ? (288984453058204316LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_13] [i_13 - 1] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13] [i_13 - 1] [i_13 - 1] [i_7] [i_13])))));
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_7 - 1] [i_13 - 1])) - (((((/* implicit */int) arr_15 [i_7 - 1] [i_13 - 1])) % (((/* implicit */int) var_0))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 18; i_15 += 2) 
                    {
                        arr_48 [i_15 + 3] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) (+((((~(3551232694U))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)65534)) - (65530))))))))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_38 [i_5] [i_5] [10ULL] [8] [i_5] [i_5])) ? (((arr_39 [i_5] [i_7 - 1] [(signed char)20] [(signed char)20]) ? (arr_9 [i_7] [i_7] [(unsigned short)8] [(unsigned short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_5] [i_5] [i_11] [i_11] [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (10U))))));
                    }
                    var_32 = ((/* implicit */_Bool) -3270453340252186011LL);
                }
                var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_5] [i_7]))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
            {
                arr_51 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)4)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)62572)))) : (((/* implicit */int) arr_37 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))) / (arr_38 [i_5] [i_7] [i_7] [i_7] [i_16] [i_7])));
                var_34 = ((/* implicit */short) 12860212427702537721ULL);
                var_35 = ((/* implicit */short) (+(arr_38 [10LL] [i_5] [i_16] [i_7] [i_7] [i_7 - 1])));
            }
            arr_52 [i_7 - 1] [i_7] [16LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned short)15312))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)62551))))) : (arr_27 [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_11)))) != (789842234)))))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_56 [i_5] [i_5] [i_17] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned short) arr_8 [i_5] [(signed char)22] [i_5] [(signed char)22])), (arr_36 [i_5] [i_17] [i_17] [(unsigned short)8] [i_17]))), (((/* implicit */unsigned short) arr_6 [18LL] [i_17] [i_5] [18LL]))));
            var_36 = ((/* implicit */short) min((((/* implicit */long long int) ((10866928845015596164ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))), (arr_38 [i_5] [i_5] [i_5] [18LL] [i_17] [i_17])));
        }
    }
    var_37 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((7606290549357804125ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_1)))))));
}
