/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222244
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) ? (1522364277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31950))))))), (((((/* implicit */_Bool) 597695694U)) ? (((((/* implicit */_Bool) 12582912U)) ? (((/* implicit */unsigned long long int) 2938806470U)) : (6517425906414831837ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))))))));
                                var_21 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned short)57344))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) || (((/* implicit */_Bool) (unsigned char)0))))), (max((-4968899381830386039LL), (((/* implicit */long long int) 1511064820U)))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (((((_Bool)1) ? (2305843009213693951LL) : (((/* implicit */long long int) 1073610752U)))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2188840127U))))))) == (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)179))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) < (4272939981U)))) : (((/* implicit */int) (_Bool)0))))));
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 951211222U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (3620152359U))))))) ^ (((/* implicit */int) ((542987665) == (((/* implicit */int) (_Bool)1)))))));
                                arr_21 [i_1] [i_5] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0)))) ? ((-(6747425113223737263LL))) : (((/* implicit */long long int) ((unsigned int) 2247401767174144ULL)))))) ? (((/* implicit */int) ((_Bool) ((unsigned int) (unsigned char)93)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (15) : (((/* implicit */int) (_Bool)1))))))))));
                                var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)99)))) * (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -338766333)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8160))))) ? (max((131040U), (((/* implicit */unsigned int) (unsigned char)215)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (max(((~(2205299486581594232LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((-5455758089097019904LL) + (5455758089097019925LL))) - (11LL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((134217696ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78)))));
}
