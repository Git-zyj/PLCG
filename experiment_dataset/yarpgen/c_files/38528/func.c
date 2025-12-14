/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38528
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (unsigned char)0))), (((((/* implicit */int) var_10)) - (-494988737))))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (signed char)-44)))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (signed char)11))))))) : ((+(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned char)238))));
                var_14 = ((/* implicit */signed char) (unsigned char)238);
                arr_15 [i_3] [i_3] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) (!(((/* implicit */_Bool) 494988737))))))), (((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) (signed char)127))))));
                arr_16 [7U] = ((/* implicit */signed char) max((((var_7) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-44)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)26)) >> (((5205241743814076616LL) - (5205241743814076608LL))))), (min((((/* implicit */int) (unsigned short)61514)), (((2147483647) / (((/* implicit */int) var_0))))))));
                        var_16 = ((((/* implicit */int) (((+(((/* implicit */int) var_6)))) > (((var_9) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned short)0))))))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16068)))));
                    }
                    arr_27 [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_28 [13] [13] [i_6] [i_5] = ((/* implicit */int) (short)16068);
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */_Bool) 1266904328);
    var_18 = ((/* implicit */int) var_4);
}
