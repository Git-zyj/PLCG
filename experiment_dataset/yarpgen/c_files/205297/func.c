/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205297
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17139)) << (((((/* implicit */int) (signed char)-32)) + (37)))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (-910016552) : (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_0 [i_0]))))))), (((/* implicit */int) ((((/* implicit */int) (short)-4096)) == (((/* implicit */int) (unsigned short)32770))))))))));
    }
    for (signed char i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1 - 1] [i_1] = ((/* implicit */_Bool) (+((-(var_12)))));
        var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) 910016554)) ? (5093940901650919117LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))));
        arr_5 [(short)7] = ((/* implicit */_Bool) ((unsigned int) ((short) (unsigned short)8191)));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-34)), ((~(arr_8 [i_2 + 2]))))))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) -2204709896534410820LL))) & (((/* implicit */int) (signed char)101))))) || (((/* implicit */_Bool) -1605066469777350474LL))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5093940901650919110LL)) ? (((/* implicit */int) (_Bool)1)) : ((((~(((/* implicit */int) (unsigned char)255)))) - ((-(((/* implicit */int) (unsigned char)96))))))));
                                arr_17 [i_4] [i_5] [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (((-(3660741844U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_2] [i_6 + 1]) <= (((/* implicit */int) var_15))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_14);
}
