/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196050
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
    var_17 = ((/* implicit */_Bool) (~(var_1)));
    var_18 += ((/* implicit */unsigned short) (~(max((((/* implicit */int) min(((unsigned short)4402), (((/* implicit */unsigned short) var_13))))), (min((((/* implicit */int) (unsigned short)7120)), (1449610820)))))));
    var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_12)), (var_14)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) var_9);
                var_21 = ((/* implicit */unsigned short) ((((-1449610815) + (2147483647))) >> ((((+(var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (2888086407039754978LL)))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1449610834)) && (((/* implicit */_Bool) (signed char)1)))), ((!(((/* implicit */_Bool) 1449610838))))));
                            var_23 = ((/* implicit */_Bool) min(((~(0U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (1449610838))))));
                            var_24 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1449610855))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1449610838)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1449610844))))) : (1449610838)));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (((+(min((((/* implicit */int) var_16)), (1449610836))))) * ((-((-(((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) (unsigned char)146)))), ((~(-1449610820)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) + (((/* implicit */int) (unsigned char)218))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) * ((+(1697300626U)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_26 [i_7] [14] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min(((signed char)-29), ((signed char)-24)));
                        arr_27 [i_8] [i_9] [i_8] [i_10] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)51)))))));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(1997845514965275301LL)))) && (((/* implicit */_Bool) (signed char)38))))))))));
    }
}
