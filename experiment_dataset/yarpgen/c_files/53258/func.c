/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53258
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
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 ^= ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)26)) << (((218071706) - (218071704)))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_3 - 1] [i_1] [4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) -1LL);
                        var_14 = ((/* implicit */unsigned short) ((((long long int) var_1)) ^ (((/* implicit */long long int) var_7))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)21905))) && (((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) var_7)) > (2677819568U))))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (1757151900U)))) ? (((((/* implicit */_Bool) (short)28702)) ? (12187342638023940009ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (~(var_1))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((short) var_7));
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)110)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_5)))))) / (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)50918)) : (((/* implicit */int) var_9))))) ? (((unsigned long long int) ((unsigned int) var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9891)) - (((/* implicit */int) var_9))))) ? (-560318618) : (((/* implicit */int) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_28 [i_5] [i_6] [i_5] [i_5] = ((long long int) var_5);
                                var_18 &= ((/* implicit */unsigned char) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((var_8) + (8181197262382950280LL))) - (31LL))))))))))));
                                arr_29 [i_5] [i_5] [i_7] [i_7] [i_5] [i_9] = ((/* implicit */unsigned int) (+((+(-207917546)))));
                                var_19 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-25643)))) + (2147483647))) << (((((/* implicit */int) ((var_5) || (((/* implicit */_Bool) (unsigned short)0))))) - (1)))));
                                arr_30 [i_6 - 3] [i_6] [i_6] [i_6 - 3] [i_6] [i_5] [(short)17] = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5] [i_5] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)1))))));
                    var_20 ^= ((/* implicit */int) 4294959104U);
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)25642))) <= (-1LL)));
        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) ((signed char) 7933649487048290609LL)))) ^ (var_1)))));
        arr_34 [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (15611605075820853322ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))));
        arr_35 [(short)19] = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)7680)) || (((/* implicit */_Bool) var_2))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            arr_38 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) 1464195166U))));
            arr_39 [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((unsigned int) 1636795956U));
            arr_40 [i_10] [14] [11LL] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_10)))));
            arr_41 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) var_0);
            var_23 = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_45 [i_12] = ((/* implicit */short) (+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_0))))));
            var_24 = ((/* implicit */short) ((unsigned int) var_0));
            arr_46 [2] [i_12] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) 8220U))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (3419697598U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
            var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -517678296))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11041685772117777636ULL)));
        }
        for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) % (((((/* implicit */_Bool) 8208U)) ? (2658171340U) : (((/* implicit */unsigned int) var_7))))));
                        var_27 = ((/* implicit */int) ((unsigned long long int) ((3626540110U) << (((var_8) + (8181197262382950266LL))))));
                    }
                } 
            } 
            var_28 ^= ((/* implicit */short) (+(((long long int) (unsigned char)152))));
        }
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            arr_56 [i_10] = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)46048))))));
            var_29 |= (+((+(((((((/* implicit */int) (short)-7661)) + (2147483647))) << (((((/* implicit */int) var_5)) - (1))))))));
        }
    }
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 2) 
                {
                    for (unsigned int i_20 = 3; i_20 < 8; i_20 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1265966827)))) ^ (((((/* implicit */_Bool) var_9)) ? (4744240068196380217LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((int) var_0));
                            var_32 ^= ((/* implicit */unsigned int) var_8);
                            arr_65 [i_17] [i_18] [i_19 + 2] [i_20] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 8092563697719498008LL)) && (((/* implicit */_Bool) (unsigned short)2040)))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) (+(var_10)));
            }
        } 
    } 
}
