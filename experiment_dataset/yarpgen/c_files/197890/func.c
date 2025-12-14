/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197890
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
    var_13 = ((/* implicit */int) var_11);
    var_14 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                    var_15 = ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) || (((/* implicit */_Bool) 1456138155U)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (2838829141U))), (((/* implicit */unsigned int) ((short) (_Bool)1))))) : (min(((-(1456138155U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (short)1303))))))))))));
                                arr_14 [i_1] [(unsigned char)8] [i_2] [2] [i_2] [i_3] [(signed char)18] = ((/* implicit */unsigned short) min((arr_7 [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 17457076305220194916ULL))) + (((/* implicit */int) ((unsigned short) arr_2 [i_3]))))))));
                                var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) | (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (8421065824664027831LL))))));
                                arr_15 [i_2] = ((/* implicit */signed char) ((short) max((min((var_4), (((/* implicit */unsigned int) -2035269559)))), (((/* implicit */unsigned int) arr_10 [i_1] [i_2])))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1304)) ? ((((!(((/* implicit */_Bool) (signed char)68)))) ? (arr_11 [i_1 - 1] [i_1 + 1] [(signed char)16] [i_1 + 1] [i_4 + 1]) : (((long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) arr_13 [i_0] [(signed char)13] [1U] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1456138155U)) ? (15091629995013741782ULL) : (((/* implicit */unsigned long long int) 2147483647)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)100)) ? (((unsigned int) (signed char)-96)) : (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)61944), (((/* implicit */unsigned short) (unsigned char)149))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_21 -= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_11 [i_5] [i_5] [(unsigned short)9] [i_6] [i_6]))) << ((((_Bool)1) ? (((/* implicit */unsigned int) ((arr_19 [i_6] [i_5]) & (((/* implicit */int) arr_8 [i_5] [i_6]))))) : (arr_17 [i_6] [i_5])))));
            arr_23 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)41015))))) ? ((-(((/* implicit */int) (signed char)-84)))) : (((/* implicit */int) ((unsigned short) arr_1 [i_5]))))) : (((int) ((signed char) (unsigned short)20403)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            arr_27 [(short)0] [i_7 + 1] = ((/* implicit */unsigned short) arr_26 [i_5] [i_5] [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (signed char i_9 = 4; i_9 < 7; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)0), (max(((unsigned char)192), (((/* implicit */unsigned char) arr_1 [i_9 + 1]))))))) != (0))))));
                        arr_35 [i_9] [i_8] [i_8] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_5]))) / (min((229376U), (1879048192U)))))));
                        var_23 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_6 [i_5] [i_5] [i_5])))) ? (arr_26 [i_5] [i_7] [i_9 + 1]) : (((((/* implicit */_Bool) (short)-19747)) ? (((/* implicit */int) arr_8 [i_5] [i_8])) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_8] [i_9])))))));
                        var_24 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (short)3631)))));
                    }
                } 
            } 
            arr_36 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_7 [2U] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)12813)) ? (((/* implicit */int) arr_25 [(unsigned short)1] [i_7])) : (((/* implicit */int) (signed char)107)))), ((+(((/* implicit */int) (short)-30796))))))) : ((-(-31353141833553925LL)))));
            var_25 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_11))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -6373552265299964857LL)) ? (((/* implicit */int) (short)-26084)) : (((/* implicit */int) (unsigned short)18662))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)10911))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) var_4);
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 15360)) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))))) : ((~(max((var_7), (((/* implicit */long long int) var_2))))))));
    }
}
