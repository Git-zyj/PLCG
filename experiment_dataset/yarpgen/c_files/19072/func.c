/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19072
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((unsigned char)181), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)58)) < (((/* implicit */int) (_Bool)0)))))))), (4503599618981888LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (~((-(-3501694320537806026LL)))));
                var_17 = max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0]));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((short) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) 3654014656U)))))) == ((~(((/* implicit */int) arr_1 [i_2] [i_3]))))));
                            var_19 = ((/* implicit */unsigned char) arr_8 [i_0 - 4]);
                            arr_11 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)125)))) + (((/* implicit */int) min((arr_7 [i_0 - 2]), (arr_8 [i_0 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            {
                var_20 = ((((/* implicit */int) (unsigned char)2)) >> ((((~(((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_1 [i_4] [i_5])) + (31803))))))) + (18))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_13 [i_4]))))))) - (((max((13754929608242705590ULL), (((/* implicit */unsigned long long int) arr_16 [i_4 - 1] [i_4 - 1])))) - (((/* implicit */unsigned long long int) (+(arr_6 [i_5]))))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 6; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_5] [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((7U) % (3329926070U)))));
                                arr_29 [i_4] [i_4] [i_4] [i_7] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)208)), (2147483647)))) ? (((int) ((short) (short)6387))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) - (2868161741004414294ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) arr_25 [i_4] [i_5] [i_5] [i_7] [i_8])) : (((/* implicit */int) arr_7 [i_4 + 2])))) : (((1906246567) / (-704673997)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
