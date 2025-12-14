/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209549
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1954316601)) && (((/* implicit */_Bool) (unsigned char)128)))))) < (min((((/* implicit */long long int) (unsigned char)217)), (-5025394477066625735LL)))))), ((unsigned char)116)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)65535);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_22 [i_7] [i_5] [i_7] [i_7] [i_4] [i_3 - 1] = ((((/* implicit */_Bool) -955729198952441614LL)) ? (((/* implicit */long long int) 3399758661U)) : (-1683054890480345817LL));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)71)), (((((/* implicit */_Bool) (unsigned short)28613)) ? (((/* implicit */int) (unsigned short)36928)) : (1480460318)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)133)), (2819569101114442380ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)95)) || (((/* implicit */_Bool) (unsigned short)28613))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-68)), ((unsigned char)107)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)16967)), (2184192538420834206LL)))) && (((/* implicit */_Bool) 2184192538420834206LL))))), ((~(max((8076598699096157360LL), (((/* implicit */long long int) -1557810452))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2184192538420834206LL)) ? (((/* implicit */int) (short)8188)) : (((/* implicit */int) (unsigned short)36917))))) ? ((+((-9223372036854775807LL - 1LL)))) : (max((-5646134856784410671LL), (((/* implicit */long long int) (signed char)-96)))))), (min((((((/* implicit */_Bool) (unsigned short)28619)) ? (((/* implicit */long long int) 1557810427)) : (-2184192538420834206LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6436933109663230587ULL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
