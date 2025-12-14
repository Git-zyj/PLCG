/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202851
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((_Bool) var_2)))));
        var_11 = ((/* implicit */unsigned int) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 6060157816621702455ULL)) ? (1745736756U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156)))));
                        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (15321509794796774991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763)))))) ? (var_1) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)))));
                        arr_14 [i_4] [i_2] [i_2] [i_4] [(unsigned short)4] = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 3 */
                        for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            arr_18 [i_1] [(signed char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))) ? (((/* implicit */int) ((signed char) var_2))) : (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (var_0))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 354239901)) ? (2823662398129998490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) var_8)) + (var_4)))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_16 -= var_0;
                            arr_23 [i_1] [i_6] [(_Bool)1] [i_1] [i_1 + 2] [i_6] [i_1 + 1] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)65));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)17959)) : (((/* implicit */int) (unsigned char)99))));
                            var_18 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_4))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((_Bool) 4393426475405914725LL)))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))))));
                            var_19 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6484513293630748990LL)) ? (5332230271939312659LL) : (-4393426475405914726LL)))) ? (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_2))))));
    }
    var_21 *= ((/* implicit */unsigned char) var_2);
    var_22 -= ((/* implicit */long long int) ((((_Bool) ((_Bool) (signed char)10))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) var_8))))) || (((var_7) <= (var_7)))))) : (((/* implicit */int) var_3))));
}
