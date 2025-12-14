/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235524
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
    var_11 |= ((/* implicit */signed char) max((((/* implicit */int) ((min((var_10), (((/* implicit */long long int) var_5)))) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))), ((+(((/* implicit */int) var_3))))));
    var_12 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_8)) | (arr_0 [i_2 + 1]))), (((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) << (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_1)))) : (((/* implicit */int) var_5))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((-21LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                        var_14 = min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)15)), ((short)-28357)))), (arr_8 [i_0] [i_0]));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2887740766U) | (arr_1 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) | (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */_Bool) var_7);
        var_16 = max((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_4)))), (((((/* implicit */int) var_7)) % (arr_6 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (short)1920);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */short) min((max((var_9), (((/* implicit */unsigned char) arr_9 [(signed char)9] [i_7] [i_7 + 1] [(_Bool)1])))), ((unsigned char)242)));
                        var_19 = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) (((+(2910828268U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            var_21 = ((/* implicit */short) min((var_1), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1927)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28357))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360))) : (((((/* implicit */long long int) 2443146006U)) + (-21LL)))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((14LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1851821303U)) == (var_10))))))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_8] [i_8] [i_8]), (((/* implicit */unsigned char) var_3))))))));
                            var_23 = ((/* implicit */_Bool) 5309741586027415975LL);
                        }
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                        {
                            arr_37 [i_11] [i_8] [i_8] [i_4] = ((/* implicit */_Bool) (unsigned char)104);
                            var_24 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 5309741586027415988LL)) ? (((/* implicit */int) arr_25 [i_4])) : (((/* implicit */int) arr_25 [i_8])))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)29412)) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)12747)) > (1073741823))))))), (((int) max((((/* implicit */long long int) var_3)), (var_0))))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */int) var_10);
        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (max((((/* implicit */unsigned int) (unsigned short)7)), (2443146006U))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (signed char)121)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_12 = 1; i_12 < 11; i_12 += 4) 
    {
        arr_41 [i_12] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((unsigned short) -854539249)), (((/* implicit */unsigned short) ((_Bool) var_1)))))), (13941207918616682161ULL)));
        arr_42 [i_12] = ((/* implicit */unsigned int) (-(var_10)));
    }
    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        arr_46 [i_13] = ((/* implicit */signed char) (_Bool)1);
        arr_47 [i_13] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (signed char)104))))), (((((/* implicit */_Bool) var_10)) ? (arr_44 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))));
        var_28 = ((/* implicit */short) arr_44 [i_13]);
    }
    var_29 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) 1810004439U)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)85))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27046))))) : (4259184175U)))));
}
