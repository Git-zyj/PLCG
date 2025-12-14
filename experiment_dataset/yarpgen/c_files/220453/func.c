/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220453
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
    var_20 &= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (signed char)94)) * (((/* implicit */int) (unsigned char)8)))) : (var_2));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)8))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_22 = ((signed char) 6401109001407016089LL);
        arr_3 [i_0] = ((/* implicit */int) 1570966996U);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1432678750)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))));
        var_23 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)127)) / (-1432678757))) - (((int) arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(0ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7875638145293865348ULL) : (((/* implicit */unsigned long long int) 1413941169U)))) : (15647172576366095880ULL)))));
        arr_9 [2] = ((/* implicit */short) (signed char)-95);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_19 [i_3] = ((/* implicit */long long int) arr_16 [i_1] [i_1] [(short)20] [i_1] [i_1]);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((1432678751) > (min((-1432678750), (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */long long int) ((int) arr_16 [i_1] [i_1] [i_1] [i_1] [(unsigned short)8]));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12167670132029662317ULL)) && (((/* implicit */_Bool) -1297794663)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            for (int i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned short)4660)) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)20945)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_16 [i_8] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_2 [i_6 + 2] [i_7]))));
                        var_27 *= ((/* implicit */signed char) ((unsigned long long int) ((2724000304U) >> (((var_2) - (1709754202))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 24; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            {
                arr_36 [i_10] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((-8456972586677076769LL) - (((/* implicit */long long int) ((/* implicit */int) (short)120)))))));
                arr_37 [i_10] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_34 [i_10] [i_9])) ^ (var_18)))) ? (((((/* implicit */_Bool) 371856275)) ? (3712814126558820413LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16206))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)47543), (((/* implicit */unsigned short) (signed char)33)))))))));
                arr_38 [12ULL] |= ((/* implicit */unsigned long long int) -2612069413527177064LL);
            }
        } 
    } 
}
