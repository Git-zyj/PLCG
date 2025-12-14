/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233169
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) (unsigned short)65535);
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))))) ? (((/* implicit */int) (unsigned short)14952)) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)2330))))));
                                var_18 |= ((/* implicit */signed char) min(((short)-15984), ((short)-2331)));
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)25)) ? (((((/* implicit */_Bool) (short)2337)) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)2310)), (var_1)))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (short)25432))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13499379162369964048ULL)) ? ((~(((/* implicit */int) arr_13 [i_4] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) : (((/* implicit */int) (short)-32764))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_9), (max((arr_8 [i_1] [i_2]), (((/* implicit */unsigned short) arr_1 [i_0] [i_1])))))))));
                                var_21 *= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)8483)))) && ((_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)108)))) ^ (((arr_21 [i_5]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)8483))))))) ? ((~(-2009571652))) : ((-(arr_23 [i_5] [i_6] [i_6 - 1])))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 13499379162369964048ULL)) ? (2302531136U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2355)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (2009571670) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_28 [i_5] [i_6 - 1] [i_7] [i_8] |= -3062769973799877155LL;
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16923497977060896491ULL)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (signed char)-39))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_8])))))) ? (max((((arr_20 [i_5]) * (2302531136U))), (((/* implicit */unsigned int) (unsigned char)251)))) : (arr_20 [i_7]))))));
                            arr_29 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16900)) ? (((/* implicit */int) (short)16380)) : (((/* implicit */int) (signed char)-117))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) 2952323460708079042ULL);
            }
        } 
    } 
}
