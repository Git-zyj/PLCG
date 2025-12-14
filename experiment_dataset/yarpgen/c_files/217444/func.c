/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217444
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
    var_11 = min((((/* implicit */unsigned long long int) var_7)), (397225658858467276ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)0)) + ((-2147483647 - 1)))), (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -6501302689310201816LL)) ? (var_7) : (-6501302689310201816LL)))))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0]))))));
                            arr_10 [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) -5131391051090402424LL);
                            var_13 = ((/* implicit */signed char) arr_0 [i_3]);
                            var_14 = ((/* implicit */unsigned short) (signed char)124);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) arr_5 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)6)) ? (6914507818233178611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))))));
                    var_17 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((int) 6501302689310201816LL))), (((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_15 [i_4] [i_5]))))), (max((arr_13 [i_4] [i_4]), (((/* implicit */unsigned long long int) min((1069877781), (((/* implicit */int) (unsigned char)229)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            {
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((5131391051090402412LL) & (((/* implicit */long long int) -2107751077)))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_21 [i_8] [i_7]))))))));
                arr_27 [i_7] [i_8] = ((/* implicit */int) (signed char)60);
            }
        } 
    } 
}
