/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237460
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47903)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_7))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = (~(((((0LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) min(((signed char)-32), (((/* implicit */signed char) (_Bool)1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(-1826371790)));
        var_18 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-32))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) arr_5 [(short)5])), (-12LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1]), ((_Bool)1)))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_3] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)66), ((unsigned char)181)))) ? (((((/* implicit */int) (_Bool)1)) / (-882725986))) : (((/* implicit */int) arr_9 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max(((~(9223372036854775807LL))), (((/* implicit */long long int) max((((/* implicit */short) var_6)), (var_8)))))));
                    var_19 = ((/* implicit */unsigned char) ((int) var_12));
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [17U] [i_4])) - (-613568895)));
            arr_19 [i_5] = ((/* implicit */signed char) var_6);
            arr_20 [i_5] [16LL] [0LL] &= ((/* implicit */signed char) var_5);
            var_21 = (~(((/* implicit */int) (_Bool)1)));
        }
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            arr_24 [i_4] &= ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) : (2199023251456ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_23 [i_6 - 1])))))));
            arr_25 [i_4] [13U] = ((short) max((arr_14 [i_4] [i_6]), (arr_14 [i_4] [i_4])));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) max((arr_15 [i_4] [i_6]), (arr_15 [i_6 + 1] [i_6 + 1]))))));
            var_23 = ((/* implicit */short) (_Bool)0);
        }
        for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                arr_30 [i_4] [i_8] [(short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((((/* implicit */_Bool) arr_21 [i_4] [i_7])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_14 [(_Bool)0] [i_7])))), (((/* implicit */int) arr_27 [i_8 - 1] [i_7 - 2])))) : ((+(((/* implicit */int) ((unsigned char) arr_27 [i_7 - 2] [9LL])))))));
                arr_31 [i_4] [i_7 + 1] [i_8] = ((/* implicit */short) (!((_Bool)1)));
            }
            arr_32 [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)152)), (((long long int) min((arr_1 [i_7] [i_4]), (((/* implicit */short) (unsigned char)13)))))));
        }
        arr_33 [18ULL] = ((/* implicit */short) (unsigned short)0);
        arr_34 [i_4] = min((((long long int) ((-7160628612646313829LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned short)6])))))), (arr_29 [21ULL]));
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((short) (-(arr_29 [(unsigned short)13]))));
        arr_37 [2U] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_36 [18])) : (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) (unsigned char)255)) ? (var_15) : (((/* implicit */unsigned long long int) arr_35 [(unsigned char)8]))))));
    }
    var_25 = ((/* implicit */short) var_13);
    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (var_2)))))))));
}
