/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230097
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
    var_10 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_5)) - (((/* implicit */int) min(((signed char)-52), (((/* implicit */signed char) var_3))))))) + (2147483647))) << (((((/* implicit */int) ((((unsigned long long int) var_1)) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((var_8) - (1937618798))))))))) - (1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (signed char)51)) << (((var_8) - (1937618796))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_12 -= ((unsigned long long int) ((long long int) (short)-13067));
            var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)-13049))) ? (var_9) : ((-(((/* implicit */int) var_5))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_14 ^= ((/* implicit */unsigned long long int) ((signed char) (-(var_8))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_15 [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((short) (unsigned short)65513)));
                            arr_16 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_4)))));
                            arr_17 [i_0] [i_2] [i_0] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (signed char)108)) % (((/* implicit */int) (short)13047)))));
                            var_15 = ((/* implicit */short) ((4980848976874829494ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 7; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned short) (unsigned char)62);
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_0] &= ((/* implicit */short) ((_Bool) ((((/* implicit */int) (short)-13086)) / (((/* implicit */int) var_4)))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((long long int) var_0)) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (11718314237948749025ULL))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 7; i_11 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13073))) : (2275834792U)))) + (((unsigned long long int) var_1))));
                        var_18 ^= (short)-29989;
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3838819432493280494ULL)))) ? (((/* implicit */int) ((_Bool) (short)-13053))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535))))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] = (!(((/* implicit */_Bool) 804245322U)));
                        var_20 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-13053)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)41759)))));
                    }
                } 
            } 
        }
        arr_37 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (short)13053)))));
    }
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */long long int) (-(((var_7) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) (unsigned short)65535))))))), (((((((/* implicit */_Bool) 6728429835760802585ULL)) || (((/* implicit */_Bool) (unsigned short)22)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7010188302835404216LL)) || (((/* implicit */_Bool) var_5)))))) : (((long long int) var_8)))))))));
        arr_42 [(_Bool)1] [i_12] = ((/* implicit */unsigned char) max(((!(((_Bool) (unsigned short)65508)))), (min((((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)-40)))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-127))))))));
    }
    var_22 = (_Bool)1;
}
