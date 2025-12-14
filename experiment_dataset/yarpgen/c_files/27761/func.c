/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27761
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
    var_12 -= ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-83)), (728387744308110494ULL)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (short)-2048)))))))));
    var_13 = ((/* implicit */signed char) (_Bool)1);
    var_14 |= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */int) (short)2047);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (short)-2035))));
    }
    for (long long int i_1 = 3; i_1 < 7; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)-2035)), ((unsigned short)3205)));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_15 = min((min((((/* implicit */int) ((536075841) == (((/* implicit */int) (short)-2048))))), (((((/* implicit */_Bool) (short)-2066)) ? (((/* implicit */int) (unsigned short)896)) : (((/* implicit */int) (short)13508)))))), (((/* implicit */int) ((3151072462U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-2015)))))));
            arr_9 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65409)), (-1519248358)))) ? (((/* implicit */unsigned long long int) max((-256LL), (((/* implicit */long long int) (short)2034))))) : (13930611858588964246ULL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((325528781U) < (((/* implicit */unsigned int) 791205889)))))) : (((((/* implicit */_Bool) (signed char)126)) ? (15131388245570807531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1045825790), ((-2147483647 - 1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-1821761304) : (((/* implicit */int) (unsigned char)71))))) : (7986872023094980179LL))))));
            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)63)) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36745))))))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)1)), (18446744073709551615ULL)));
        arr_11 [i_1] |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)160))))));
    }
}
