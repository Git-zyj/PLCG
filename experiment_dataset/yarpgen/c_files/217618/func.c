/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217618
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (signed char)-84);
                arr_8 [i_0] = (+(((long long int) (short)-15788)));
                var_20 ^= ((/* implicit */unsigned int) (unsigned short)12720);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                arr_13 [(signed char)0] |= ((/* implicit */unsigned long long int) (-(arr_4 [i_2] [i_2] [i_2])));
                var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)88))))) ? (((/* implicit */int) max(((signed char)-79), ((signed char)-58)))) : (((((/* implicit */_Bool) (signed char)-12)) ? (arr_4 [(signed char)16] [i_2 - 1] [i_3]) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-52)) ^ (arr_21 [i_7] [i_7] [i_6 - 1] [21LL]))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)18391)), (3076568697U))))))))))));
                            var_23 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_23 [(unsigned short)0] [i_6] [i_6] [2])) % (((/* implicit */int) (unsigned short)46649)))) > (((/* implicit */int) ((unsigned char) var_16))))) && (((/* implicit */_Bool) max(((unsigned short)20198), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -6316973315276660983LL)) && (((/* implicit */_Bool) 1218398599U))))))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_9)))))) | (max(((~(((/* implicit */int) (unsigned short)2684)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) (+((+(((/* implicit */int) min(((unsigned short)4), ((unsigned short)62907))))))));
                arr_26 [i_4] [(signed char)8] [5] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((120) - (106)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)62849)) : (((/* implicit */int) (unsigned char)121)))) : (((((/* implicit */_Bool) 8463260858394156090LL)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) arr_3 [i_4])))))));
            }
        } 
    } 
}
