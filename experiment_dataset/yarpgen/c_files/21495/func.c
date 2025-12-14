/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21495
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5658566741056191813LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(arr_5 [i_0] [5ULL])))))) < ((+((+(var_2)))))));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned short) ((((8887913902530130569LL) << (((((-1591673728) + (1591673781))) - (53))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    var_14 -= ((/* implicit */signed char) (-(1770309512)));
                    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1073217536)) ? (var_6) : (((/* implicit */long long int) -1073217529)))) != (((/* implicit */long long int) 1808777174))));
                }
                for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (+(((var_5) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -991747623)) != (arr_11 [i_0] [i_0] [i_3])))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) : (var_12)))) ? (((((/* implicit */unsigned long long int) var_10)) | (var_9))) : (((/* implicit */unsigned long long int) 33554431)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(var_8))))))));
                                arr_20 [i_0] [i_0] [i_5] = ((((/* implicit */unsigned long long int) (+(arr_16 [i_4] [i_0] [i_0] [i_1])))) / (((((/* implicit */_Bool) (~(-33554431)))) ? (max((7977220282277771635ULL), (arr_3 [i_4 - 2] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)26388)) ? (1989961752086579611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39147))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((short) var_0)))));
                                arr_28 [i_0] [i_0] [i_0] = ((unsigned long long int) ((unsigned long long int) var_10));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) var_4)) % (arr_9 [i_0] [i_6 + 1] [i_7] [i_8])))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % (var_10))) < (((/* implicit */unsigned int) var_11))))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6] [i_7] [7LL] [i_6]))))), (((short) var_10)))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = -33554451;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) / (((/* implicit */int) ((short) (unsigned short)63476))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)-81))))))) + (((((12589807547354306509ULL) == (((/* implicit */unsigned long long int) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (max((var_9), (((/* implicit */unsigned long long int) var_3))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4)))) ? (var_12) : (((/* implicit */unsigned long long int) (-(var_3))))))))))));
    var_22 = ((/* implicit */unsigned short) (+(var_4)));
}
