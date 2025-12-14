/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206465
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
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) max(((_Bool)0), ((_Bool)1)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_16 &= ((/* implicit */short) max((((/* implicit */unsigned int) max(((signed char)-23), ((signed char)-46)))), (max((((/* implicit */unsigned int) 2031084719)), (1227744977U)))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            var_17 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) 1446249109U)), (8041111307412066093LL)));
        }
        var_18 = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_2])), (arr_5 [i_2])))) > (((arr_7 [i_2] [i_2]) >> (((((/* implicit */int) arr_6 [i_2])) - (30462)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_17 [i_2] [i_5] [i_3] [i_5] [i_3] = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -559243745)), (851507838U)))) - ((-(18428985640216331608ULL))));
                        var_20 ^= (+(((arr_7 [i_5] [i_4]) << (((((/* implicit */int) (signed char)-38)) + (81))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_21 [i_2] [i_3] [i_4] [i_6] = max((((/* implicit */unsigned long long int) (~(3443459464U)))), (max((10534576900260629725ULL), (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_21 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                            var_22 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_25 [i_2] [i_3] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_5] [i_5] [i_7] [i_7]))) * (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]))) - ((-(arr_22 [i_2] [i_3] [i_4] [i_5] [i_7])))));
                            var_23 += ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 3443459458U)) ? (9321251772573384139ULL) : (((/* implicit */unsigned long long int) 1446249122U)))), ((-(7912167173448921893ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 562558363879890067LL)) && (((/* implicit */_Bool) 4855175783920376133LL)))))));
                            var_24 = ((/* implicit */int) (+(1446249122U)));
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */short) max((var_11), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) | (3415747117413461532ULL)))));
                            var_26 -= ((/* implicit */unsigned int) (~(8471681769272704174LL)));
                            arr_28 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1360))) < (2585647417257564626ULL)))), (((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_4] [i_5] [i_8])))))));
                        }
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)47226)), (7057604567209058978LL)))), (((((/* implicit */_Bool) 9596514734649669925ULL)) ? (((/* implicit */unsigned long long int) ((long long int) 559243727))) : (max((9500515674260784348ULL), (((/* implicit */unsigned long long int) (signed char)-17))))))));
                            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_4] [i_5] [i_9]))))), (arr_16 [i_5] [i_9])));
                        }
                        arr_31 [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((max((arr_5 [i_2]), (max((arr_9 [i_5]), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)109))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned int i_11 = 2; i_11 < 19; i_11 += 3) 
            {
                {
                    var_29 = (+(((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_10 [i_2] [i_10] [i_11] [i_10]))))) + (((/* implicit */int) arr_35 [i_2] [i_2] [i_2])))));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned long long int) arr_19 [i_2] [i_10] [i_10] [i_11] [i_11 + 1] [i_11] [i_11])))));
                    arr_37 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((int) ((((-7057604567209058971LL) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) 974311426))) - (53195))))));
                }
            } 
        } 
    }
    var_31 ^= ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) -26823078)), (var_11))))) * (((/* implicit */unsigned long long int) (-(-5912781676752584059LL))))));
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -375893790)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26198)))))));
}
