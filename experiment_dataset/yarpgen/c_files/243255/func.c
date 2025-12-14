/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243255
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) <= (arr_9 [i_1] [i_2])))) >> (((/* implicit */int) (signed char)7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) || ((!(((/* implicit */_Bool) var_1)))))))) : ((~(18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_1 [13LL])))) || ((!(((/* implicit */_Bool) arr_1 [i_5])))))) && (((((/* implicit */int) (!(((/* implicit */_Bool) 640334728U))))) > (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_5] [i_4])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-93))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-8759))) > (arr_5 [i_3] [i_7]))), (((((/* implicit */_Bool) arr_27 [i_5] [i_4] [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) (short)8740)))))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (arr_0 [i_7])));
                                arr_28 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_1 [i_3]), (((/* implicit */unsigned short) (short)-8738))))) ? (min((arr_15 [i_3] [i_4] [i_7]), (((/* implicit */unsigned int) (unsigned short)30761)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                                arr_29 [i_6] [i_4] [i_5] = ((/* implicit */signed char) arr_8 [i_3 - 1] [(unsigned short)7] [i_5 + 1] [i_3 - 1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (unsigned short)21616);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 4887847420470553853ULL))));
    var_25 *= ((/* implicit */unsigned short) var_14);
}
