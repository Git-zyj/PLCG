/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244951
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 7615262899153369100LL)) ? (((/* implicit */int) (unsigned short)30750)) : (((/* implicit */int) (_Bool)0))))), ((+(1959550167321411297LL))))))));
        var_16 *= ((/* implicit */unsigned int) var_14);
        var_17 = ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)188))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) var_12);
        var_18 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)34795)), (((((/* implicit */_Bool) -1362490633)) ? (-1416366027) : (((/* implicit */int) (unsigned short)30741))))));
        var_19 -= ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) min(((short)-22140), (((/* implicit */short) var_14))))) : ((~(((/* implicit */int) (short)22139)))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (unsigned short)20615);
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_20 = ((unsigned long long int) ((max((arr_9 [i_3]), (var_12))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-22139)) >= (((/* implicit */int) var_14)))))) : ((((_Bool)0) ? (8313488315329978242LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67)))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1005410205)) ? (((/* implicit */int) (unsigned short)46600)) : (((/* implicit */int) (unsigned short)30731))))) : (((arr_9 [i_3]) ? (14478843968608225538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6040))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_3] [i_6])))))));
                            var_22 = (short)-30626;
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_6] |= ((/* implicit */signed char) var_2);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_17 [i_4]))))));
                        }
                        var_24 &= ((/* implicit */signed char) ((short) ((long long int) ((var_12) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_17 [i_4]))))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((arr_31 [i_7] [i_7] [i_7] [i_8] [i_10] [i_9]), (((/* implicit */signed char) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)40942)) : (((/* implicit */int) var_6))))) <= (((((/* implicit */_Bool) (unsigned char)54)) ? (-8184872202877341233LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))))))));
                            var_26 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3332579459679625289LL)))), (((((/* implicit */_Bool) arr_31 [(unsigned char)16] [i_7] [i_2] [4LL] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22140))) : (var_8)))))) ? (((((/* implicit */_Bool) min(((unsigned short)34795), (((/* implicit */unsigned short) (short)7197))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10427))) : (((var_13) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (short)-11026))))))))))));
        }
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -188402797570448139LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 808935370731384578ULL))))) : (((/* implicit */int) var_7)))))));
    }
    var_29 = ((/* implicit */int) var_10);
}
