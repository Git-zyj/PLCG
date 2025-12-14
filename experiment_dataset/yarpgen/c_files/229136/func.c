/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229136
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)29100)))) ? (min(((+(var_0))), (((/* implicit */long long int) ((signed char) var_10))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) 77316857))), (((unsigned int) var_9)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28934))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-12))) ^ ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)))));
                        var_16 = ((/* implicit */long long int) (short)4);
                        var_17 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                        var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) var_10))))));
                        arr_16 [i_4] [0] [i_1] [i_0] [i_4] = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)60811)) ? (0) : (((/* implicit */int) (_Bool)1)))))))));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_8))))));
        arr_18 [i_0] = ((/* implicit */unsigned short) (short)17273);
    }
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) ((unsigned int) var_5))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_3))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        {
                            arr_32 [i_6] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-122)) ^ (((/* implicit */int) (_Bool)1))))), (max((var_0), (((/* implicit */long long int) 325245244U)))))) != (min((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)121)))))))));
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)245)) || (((/* implicit */_Bool) 0ULL))));
                        }
                    } 
                } 
                arr_33 [i_7] [i_7] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 256542289)) : (-8959906891924331813LL)))), (((((/* implicit */_Bool) (short)8455)) ? (15417193932529902594ULL) : (16ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((((/* implicit */_Bool) (+(var_7)))) ? (max((6803927444325333818ULL), (((/* implicit */unsigned long long int) 8959906891924331813LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65509)) + (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (unsigned char)171)))))));
}
