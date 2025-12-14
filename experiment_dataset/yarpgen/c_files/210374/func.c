/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210374
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
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) (unsigned char)196))))) / (var_5)))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) (_Bool)1))))) ? (4294967295U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1)))))))) - (max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)-6104)) ? (11800183570027413597ULL) : (((/* implicit */unsigned long long int) 4294967293U))))))));
    var_21 = ((/* implicit */unsigned short) (unsigned char)196);
    var_22 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4218)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29242))) : (17791768814861641154ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4206)) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (signed char)-12)))))) == (((long long int) arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_23 &= ((/* implicit */short) ((int) ((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6104)))) % (((/* implicit */int) min((((/* implicit */unsigned short) (short)-5906)), (arr_8 [i_0] [i_1] [i_2])))))));
                    var_24 = ((/* implicit */signed char) ((19U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_25 &= 18446744073709551615ULL;
                    arr_18 [i_3] [i_3] [9] [i_5] = ((/* implicit */int) (((_Bool)1) ? (12753402718150102640ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6104)) ? (1354610208U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1108307720798208ULL)) ? (-973989152) : (((/* implicit */int) arr_15 [1LL] [i_4]))))))))));
                    var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) 32505856U)) : (4900800621509075462ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (short)6101)))));
                                var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 4294967277U))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)40748)) : (973989151)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967285U)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15449))))))) : ((((+(((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) 2178857240U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (16U))) - (176U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_29 = ((((((/* implicit */_Bool) ((arr_16 [i_3] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (min((4294967285U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_9])) + (((/* implicit */int) (unsigned char)250))))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (min((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)255))))))));
                                arr_29 [0U] [i_4] [i_5] [i_8 - 1] [i_9] &= ((/* implicit */unsigned short) ((int) ((short) (~(17592186044408LL)))));
                                var_30 = ((/* implicit */unsigned char) max((((-2147483647) + (((((/* implicit */_Bool) arr_22 [i_3] [i_4])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_4] [i_9]))))), (((short) arr_21 [i_3] [i_8] [i_5] [i_8 - 1] [i_3] [i_9] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [(short)4] = ((/* implicit */_Bool) ((max((((arr_16 [(short)11] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)89))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1))))))) >> (((((((/* implicit */_Bool) 2131585269U)) ? (((3691998453812524307ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */unsigned long long int) 20U)))) - (3691998453812524332ULL)))));
    }
}
