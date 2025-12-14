/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45749
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
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16489)) ? (((/* implicit */int) (short)16508)) : (((/* implicit */int) (signed char)-28))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) var_16);
                var_19 ^= ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
                arr_5 [i_1] = ((/* implicit */long long int) (signed char)-28);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), ((-(((/* implicit */int) var_3))))))) ? (min((((/* implicit */long long int) (signed char)-65)), (4362862139015168LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)16487), (((/* implicit */short) (signed char)-28)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (unsigned short)41463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (2414288297038542053ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_16) : (var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)16490)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-16491))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 &= ((/* implicit */short) min(((((_Bool)0) ? (1217174406700888261ULL) : (min((var_15), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6343))) : (((long long int) (short)32723)))))));
                            var_24 ^= ((/* implicit */unsigned short) arr_7 [i_2] [i_5]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 14049929013357276387ULL))) ? (var_15) : (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27929))) : (arr_17 [i_8 + 3] [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_2])))));
                                var_26 = ((/* implicit */signed char) ((var_3) ? (((((/* implicit */_Bool) ((14049929013357276368ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 2] [i_3])))))) ? (((int) var_2)) : (((/* implicit */int) arr_8 [i_3 + 3])))) : ((+(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))));
                                arr_26 [i_2] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) (signed char)116))) : (((/* implicit */int) ((_Bool) (signed char)96))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_16)))))))));
}
