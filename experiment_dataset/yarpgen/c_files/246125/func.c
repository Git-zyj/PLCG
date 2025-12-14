/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246125
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)92))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        var_21 *= (!(((((((/* implicit */_Bool) (unsigned short)64050)) ? (((/* implicit */long long int) -374921008)) : (-9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)0));
                        var_23 ^= ((/* implicit */int) ((max((((/* implicit */long long int) 812645372)), (-2796998410304385048LL))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) - (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)125))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)62))))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (992))))));
                        arr_11 [i_1 + 1] [i_1] [i_1] [i_1 + 3] [i_1] [i_3] = max(((-2147483647 - 1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2031694176585798465LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)41336))))) ? ((~(((/* implicit */int) (unsigned char)16)))) : (((-635406826) & (((/* implicit */int) (unsigned short)7810)))))));
                    }
                    arr_12 [i_3] [(unsigned short)21] [i_3] = (-(((((/* implicit */_Bool) 2920801060U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 140903268))))) : ((+(-680172099))))));
                    var_25 &= ((/* implicit */unsigned char) min((262143LL), (((/* implicit */long long int) (unsigned short)1))));
                    arr_13 [i_3] = ((/* implicit */unsigned char) (((-(14974449564765146324ULL))) - (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1434539586))))) : ((+(304957697))))))));
                    arr_14 [i_3] = ((/* implicit */int) ((unsigned char) (+((+(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -128)) < (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (7274802159299554172ULL)))));
    }
}
