/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39194
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
    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((1800203701) & (((/* implicit */int) (_Bool)1)))) << (max((-897409088), (((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_0] [i_0] [i_1] [i_3] = max((arr_13 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (_Bool)0)));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] [i_2])), (((((/* implicit */int) (unsigned short)51632)) / (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] [i_3]))))))) != (5836291876668347081ULL)));
                                var_18 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_3] [i_3]))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (arr_3 [i_1]))) | (max((((/* implicit */long long int) ((short) 2739098315U))), (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) || (((/* implicit */_Bool) 12610452197041204532ULL)))) && (((/* implicit */_Bool) 5836291876668347079ULL)))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((min((((/* implicit */int) arr_12 [6] [i_5] [6] [6] [i_5] [i_5] [6])), (((((/* implicit */int) (unsigned char)75)) - (-897409064))))), (((/* implicit */int) min((arr_12 [(unsigned short)10] [(unsigned short)10] [i_5] [i_5] [i_5] [i_5] [(unsigned short)10]), (arr_10 [i_5] [i_5] [i_5]))))));
                            arr_23 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)153)), (arr_22 [i_0] [i_5 - 1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5836291876668347095ULL))))) : (((/* implicit */int) (short)-27120))));
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 3; i_7 < 15; i_7 += 2) 
                            {
                                var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -8162399210317779881LL)) && (((/* implicit */_Bool) -2827512855542029911LL))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((((unsigned int) arr_17 [i_0])), (((/* implicit */unsigned int) arr_24 [i_5] [i_7])))) : (min((((/* implicit */unsigned int) arr_9 [i_6] [i_5])), (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))) : (426303817U)))))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_17 [i_6]))) << (((((unsigned int) arr_21 [i_1])) - (1148615341U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32754)), (arr_20 [i_1])))) ? (((/* implicit */int) arr_17 [i_6])) : (((arr_7 [i_1] [i_5] [i_5] [i_1]) & (-897409096)))))) : (min((((/* implicit */long long int) min(((_Bool)0), ((_Bool)1)))), (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2125))) : (arr_6 [i_0] [i_0] [i_0]))))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_10 [i_8] [i_6] [i_1])) : (((/* implicit */int) (unsigned short)36620))))) ? (((/* implicit */int) (unsigned char)2)) : ((+(((/* implicit */int) arr_8 [i_0] [i_0]))))));
                                arr_28 [i_8] [i_5] [i_8] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) ^ (arr_20 [i_8])));
                                arr_29 [i_0] [i_1] [i_5] [i_5] [i_8] [i_6] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (short)3748))));
                                var_26 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_2 [i_0])) - (((/* implicit */unsigned long long int) ((1814906703) | (-318258653))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (signed char)-48))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) (short)2260))));
}
