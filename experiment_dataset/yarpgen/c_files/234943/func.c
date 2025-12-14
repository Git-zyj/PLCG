/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234943
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
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) var_10)), (var_6))))) & (((((_Bool) -18LL)) ? (((((/* implicit */_Bool) 535742432)) ? (-1026234872) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_14 ^= ((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)179)) + (((/* implicit */int) (unsigned char)76))))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1)))), (((((/* implicit */_Bool) (unsigned char)221)) ? (10863505939201496973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6412)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned long long int) max((min((max((var_7), (((/* implicit */short) (unsigned char)197)))), (((/* implicit */short) (unsigned char)106)))), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)52088)), (arr_3 [(unsigned char)6])))) <= (((((/* implicit */_Bool) var_12)) ? (17067449918295989919ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13461))))))))));
                        arr_18 [i_4] [i_5] [i_6] = ((/* implicit */int) ((1637903017U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */long long int) (unsigned short)14701);
                    }
                    var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)53))))));
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 2871910436U)), (-3979706044538790646LL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 24; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) arr_20 [i_9]);
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 23; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_27 [(unsigned short)21] [15ULL] [i_8] [i_8] [i_8])), (min((((((/* implicit */_Bool) 2090900413U)) ? (3979706044538790646LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10873))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)12)), ((short)-28314))))))));
                            var_22 = ((/* implicit */int) arr_4 [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)54884)) ? (3979706044538790652LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52088))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_13 [i_8] [16ULL] [i_8] [i_9])))), ((!(((/* implicit */_Bool) var_0))))))))))));
                            var_24 = ((/* implicit */_Bool) arr_8 [(unsigned short)9] [i_8 - 2] [i_8] [(signed char)13] [i_10 + 2] [i_10 + 2]);
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)234)), ((unsigned short)52065)));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                var_26 &= ((long long int) ((arr_19 [i_0] [4ULL] [i_0]) / (arr_19 [i_0] [i_7] [i_0])));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) min((max((((/* implicit */int) (unsigned short)18617)), (((((/* implicit */_Bool) arr_13 [i_7] [i_11] [i_7] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7])))))), (((/* implicit */int) arr_29 [17U] [i_11] [i_11]))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_7] [i_11] [i_11] [i_12]))) | (arr_21 [i_11])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_33 [i_0] [i_7] [i_0] [i_0])) : ((+(arr_3 [i_11]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_21 [i_12]) : (arr_21 [i_12]))))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_32 [i_0] [i_7] [i_11]))));
                        var_30 = ((((/* implicit */_Bool) arr_35 [i_14 + 1] [i_14 + 3] [i_14] [i_14 + 4])) ? (arr_35 [i_14 - 1] [(unsigned short)8] [i_14] [i_14 + 3]) : (arr_35 [i_14 + 3] [i_14] [i_14 - 1] [i_14 + 1]));
                    }
                    var_31 = ((/* implicit */short) (+(arr_22 [i_0] [i_0] [i_0])));
                }
            }
            var_32 = ((/* implicit */unsigned short) 3711258266U);
        }
    }
    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
    {
        var_33 = ((long long int) ((((/* implicit */_Bool) arr_29 [i_15] [i_15] [i_15])) ? (min((11051630259776873822ULL), (((/* implicit */unsigned long long int) arr_22 [i_15] [i_15] [i_15])))) : (((/* implicit */unsigned long long int) arr_19 [i_15] [i_15] [i_15]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((((/* implicit */_Bool) arr_34 [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)52094)) : (((/* implicit */int) var_9))))));
            arr_44 [i_15] [i_15] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)52095))))) : (7395113813932677786ULL)));
        }
    }
}
