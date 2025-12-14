/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224354
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
    var_20 = ((/* implicit */_Bool) (+(((int) (-(((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_6), (((((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))) / (-1LL)))));
            arr_7 [i_0] = ((/* implicit */signed char) ((((long long int) ((1115354647U) | (((/* implicit */unsigned int) 1365827502))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-44)))))) > (((12781575119697098825ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_12 [i_0] [i_0 - 1] [1LL] = ((/* implicit */int) (+(((((/* implicit */_Bool) min((((/* implicit */short) var_18)), (var_16)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)7680)))))));
            arr_13 [i_2] = (~(((((/* implicit */int) max((var_16), (((/* implicit */short) (signed char)59))))) + (((((/* implicit */int) var_1)) << (((((/* implicit */int) var_19)) + (15))))))));
        }
        arr_14 [12] = ((/* implicit */unsigned int) max(((+(max((var_14), (((/* implicit */unsigned long long int) var_19)))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_3)))))));
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_17 [i_0] [i_3] [i_3] = ((/* implicit */short) (((((!(((/* implicit */_Bool) (signed char)-64)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18)))) * (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) == (var_0)))), (min((var_16), (((/* implicit */short) var_7)))))))));
            arr_18 [(signed char)1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
            arr_19 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) min((var_13), (((/* implicit */unsigned short) var_19)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)59)), (var_10))))) : (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
            arr_20 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) max((var_11), (var_11))))) / ((+(((/* implicit */int) ((((/* implicit */int) (signed char)59)) > (((/* implicit */int) var_12)))))))));
            arr_21 [i_0] [i_3] = ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) > (min((((/* implicit */long long int) var_3)), (var_0))));
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_24 [i_4] = ((((/* implicit */_Bool) min((min((0LL), (((/* implicit */long long int) var_15)))), (min((var_6), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */int) var_3)) : (max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((_Bool) var_4))))));
            arr_25 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (max((((/* implicit */unsigned long long int) ((signed char) var_19))), ((+(11905976138572001250ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((_Bool) -8569761503456233942LL)), ((!(var_7)))))))));
        }
        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_22 = max((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-59)), ((short)-15908)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)162))))) : (max((var_6), (((/* implicit */long long int) var_15)))))), (max((-1421037447336169555LL), ((+(var_6))))));
            var_23 = ((/* implicit */long long int) min((var_15), ((short)30848)));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */long long int) min((var_11), (((/* implicit */short) (((-(((/* implicit */int) var_7)))) <= (((((/* implicit */int) var_15)) * (((/* implicit */int) var_5)))))))));
            arr_33 [i_6] = ((/* implicit */unsigned int) (-(max((var_2), (((/* implicit */long long int) 2903249145U))))));
        }
    }
    for (int i_7 = 3; i_7 < 13; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((int) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_6) != (var_2)))))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        arr_45 [(short)12] [i_8] [i_9] [i_8] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) (short)22983)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)244))) : (((/* implicit */int) ((((/* implicit */int) (signed char)63)) == (((/* implicit */int) var_13)))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_4), (((/* implicit */long long int) var_5)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) (signed char)74))))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_4))))));
                        var_26 = ((/* implicit */int) var_9);
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) var_7);
}
