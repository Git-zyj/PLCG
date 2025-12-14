/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247021
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_4))))))), ((-((-(((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-36)), ((unsigned char)247))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)112))))), (var_2)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_0)))), ((~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6)))))))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2147483620) * (((/* implicit */int) ((808142106) > (-2147483620))))))) ? (((/* implicit */unsigned int) ((((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) - (((((/* implicit */int) var_8)) - (((/* implicit */int) var_4))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_10)) : (var_2))))))))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_4)), (var_2))))) ^ ((((+(var_2))) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_3))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((157720670614083856LL) << (((((-797331865) + (797331906))) - (39)))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(2068185979242509411ULL))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_4)))))))) ? ((~((-(157720670614083856LL))))) : (((/* implicit */long long int) (~(min((var_2), (((/* implicit */unsigned int) var_9)))))))));
        }
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2740431073U)))), ((+(var_11))))))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_2))))))));
                var_20 = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (((-(0ULL))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) % (var_10))))))));
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))));
                            var_23 = ((min(((~(var_11))), (((/* implicit */unsigned long long int) var_9)))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
