/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228055
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)47407)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18129))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47407)) ? (-1) : (((/* implicit */int) (short)-23539))))) ? (((((/* implicit */_Bool) ((24) << (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)10))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47407)))));
                    var_12 = ((/* implicit */short) (-((~(var_0)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) (unsigned short)18146)) ? (3602271592U) : (((/* implicit */unsigned int) -1585277940))))));
                    var_13 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned int) -2)) : (20U))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)18127)) ? (((/* implicit */int) (unsigned short)49535)) : (((/* implicit */int) var_9)))) >> (((((/* implicit */int) (unsigned char)58)) - (50)))));
                        arr_12 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */int) (unsigned char)174);
                    }
                    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_2) > (((/* implicit */long long int) var_7)))))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (-(10ULL)));
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_22 [9U] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1585277939) >> (((((/* implicit */int) (unsigned char)108)) - (83))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 4294967288U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)99)) < (-24))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (16)))) : (((var_2) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))))))));
                                arr_23 [i_6] [i_1] [(unsigned char)3] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(var_5))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : (((var_7) << (((3125128085U) - (3125128070U)))))))) || (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_7))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((3145138637291914320LL) <= (7100338240327072809LL)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1470804828U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2511473432450838994LL)) ? (16) : (((/* implicit */int) (unsigned short)47307))))))) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (!(var_5))))));
    var_17 = ((/* implicit */unsigned short) var_3);
}
