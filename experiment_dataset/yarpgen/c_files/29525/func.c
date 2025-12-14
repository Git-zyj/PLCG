/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29525
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
    var_10 = ((unsigned char) (unsigned short)32317);
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min(((unsigned char)56), (var_0))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((unsigned short) (+(((/* implicit */int) (unsigned char)199))))), (((/* implicit */unsigned short) arr_3 [i_3]))));
                                var_12 -= ((/* implicit */short) ((unsigned char) (unsigned char)69));
                                arr_13 [i_2] [i_1] [i_3] [(signed char)0] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (((unsigned short) var_2)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned char)191))))))))));
                                var_13 = ((/* implicit */signed char) max(((unsigned char)50), ((unsigned char)216)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)55)), (var_1)))), (((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (unsigned char)40))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned short) var_0)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned long long int) var_0));
        var_14 = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned char)77)) % (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (arr_7 [i_5] [i_5] [i_5] [i_5])))))), (((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [(signed char)1])) * (((/* implicit */int) var_9))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_15 = ((((/* implicit */int) arr_18 [i_6])) < (((/* implicit */int) arr_18 [i_6])));
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_21 [i_7 - 2] [i_7 - 2]))));
                }
            } 
        } 
        var_17 -= ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned char)226)) & (((/* implicit */int) (unsigned char)16))))))));
        var_19 = ((/* implicit */short) (_Bool)0);
    }
}
